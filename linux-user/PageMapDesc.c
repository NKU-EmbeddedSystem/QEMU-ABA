#include <PageMapDesc.h>

/* Get Page info in server(slave) side. */
inline PageMapDesc_server* get_pmd_s(uint32_t page_addr)
{
	page_addr = PAGE_MASK(page_addr);
	page_addr = page_addr >> MAP_PAGE_BITS;
#ifdef PMD_LOG
	printf("addr %p page_addr %p", addr, page_addr);
#endif
	int index1 = (page_addr >> L1_MAP_TABLE_SHIFT) & (L1_MAP_TABLE_SIZE - 1);
	int index2 = page_addr & (L2_MAP_TABLE_SIZE - 1);
#ifdef PMD_LOG
	printf("page_addr2 %p, index1 %p index2 %p\n", page_addr, index1, index2);
#endif
	PageMapDesc_server *pmd = &page_map_table_s[index1][index2];
	return pmd;
}

int add_exclusive(uint32_t addr, int tid)
{
	PageMapDesc_server *pmd = get_pmd_s(addr);
	pthread_mutex_lock(&pmd->entry_mutex);
	pmd->is_hash_llsc_locked = 1;
	m_node *p = malloc(sizeof(m_node));
	p->exclusive_tid = tid;
	p->exclusive_addr = addr;
	p->next = pmd->head->next;
	pmd->head->next = p;
#ifdef PMD_LOG
	
#endif
	pthread_mutex_unlock(&pmd->entry_mutex);
	return 0;
}

int check_and_clean_exclusive(uint32_t addr, int tid)
{
	PageMapDesc_server *pmd = get_pmd_s(addr);
	pthread_mutex_lock(&pmd->entry_mutex);
	m_ndoe *p = pmd->head->next, *pre = pmd->head, *to_free = NULL;
	int ret = 0;
	while (p) {
		if ((p->exclusive_addr == addr) && (p->exclusive_tid != tid)) {
			ret++;
			pre->next = p->next;
#ifdef PMD_LOG
			fprintf(stderr, "[check_and_clean_exclusive]\tRemoved exclusive mark of %x of thread %d\n", p->exclusive_addr, p->exclusive_tid);
#endif
			to_free = p;
		}
		pre = p;
		p = p->next;
		if (to_free) {
			free(to_free);
			to_free = NULL;
		}
	}
	/* Clean the PMD if no one is monitoring this page */
	if (!pmd->head->next) {
		pmd->is_hash_llsc_locked = 0;
		ret = -1;
	}
	pthread_mutex_unlock(&pmd->entry_mutex);
	return ret;
}

int remove_self_exclusive(uint32_t addr, int tid)
{
	PageMapDesc_server *pmd = get_pmd_s(addr);
	pthread_mutex_lock(&pmd->entry_mutex);
	m_node *p = pmd->head->next, *pre = pmd->head;
	int ret = 0;
	while (p) {
		if ((p->exclusive_addr == addr) && (p->exclusive_tid == tid)) {
			ret++;
			pre->next = p->next;
#ifdef PMD_LOG
			fprintf(stderr, "[remove_self_exclusive]\tRemoved exclusive mark of %x of thread %d\n", p->exclusive_addr, p->exclusive_tid);
#endif
			free(p);
			break;
		}
		pre = p;
		p = p->next;
	}
	pthread_mutex_unlock(&pmd->entry_mutex);
	return ret;
}

