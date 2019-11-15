#ifndef PMD_H
#define PMD_H


#include <stdint.h>
#include <pthread.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/* same as PROT_xxx */
#define PAGE_NONE   0x0000
#define PAGE_READ   0x0001
#define PAGE_WRITE  0x0002
#define PAGE_EXEC   0x0004
#define PAGE_VALID  0x0008

#define L1_MAP_TABLE_BITS 10
#define L1_MAP_TABLE_SIZE (1 << L1_MAP_TABLE_BITS)

#define L2_MAP_TABLE_BITS 10
#define L2_MAP_TABLE_SIZE (1 << L2_MAP_TABLE_BITS)

#define L1_MAP_TABLE_SHIFT (VIRT_ADDR_SPACE_BITS - 12 - L1_MAP_TABLE_BITS)

#define PAGE_MASK(x) ((x) & 0xfffff000)

typedef struct m_node {
	int exclusive_tid;
	uint32_t exclusive_addr;
	struct m_node *next;
} m_node;

typedef struct PageMapDesc_server {
	int is_hash_llsc_locked;
	pthread_mutex_t entry_mutex;
	m_node head;
} PageMapDesc_server;

PageMapDesc_server page_map_table_s[L1_MAP_TABLE_SIZE][L2_MAP_TABLE_SIZE] __attribute__ ((section (".page_table_section_server"))) __attribute__ ((aligned(4096))) = {0};
PageMapDesc_server *get_pmd_s(uint32_t page_addr);

#endif
