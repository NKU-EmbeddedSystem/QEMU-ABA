#ifndef HTM_H
#define HTM_H

enum htm {
    HTM_OK,
    HTM_ABORT_RETRY,
    HTM_ABORT_NORETRY,
};

#if defined(__x86_64__)
/* compile with -mrtm */
#include <immintrin.h>

static inline enum htm htm_begin(void)
{
    int status;

    status = _xbegin();
    if (unlikely(status != _XBEGIN_STARTED)) {
        if (status & _XABORT_RETRY) {
            return HTM_ABORT_RETRY;
        }
        return HTM_ABORT_NORETRY;
    }
    return HTM_OK;
}

static inline void htm_end(void)
{
    _xend();
}

static inline bool htm_test(void)
{
    return _xtest();
}

static inline void htm_abort(void)
{
    _xabort(0);
}

#elif defined(__powerpc64__)
/* compile with -mhtm */
#include <htmintrin.h>

static inline int htm_begin(void)
{
    unsigned int status;

    status = __builtin_tbegin(0);
    if (likely(status)) {
        return HTM_OK;
    }
    if (_TEXASRU_FAILURE_PERSISTENT(__builtin_get_texasru())) {
        return HTM_ABORT_NORETRY;
    }
    return HTM_ABORT_RETRY;
}

static inline void htm_end(void)
{
    __builtin_tend(0);
}

static inline int htm_test(void)
{
    unsigned char state = _HTM_STATE(__builtin_ttest());

    if (likely(state == _HTM_TRANSACTIONAL)) {
        return 1;
    }
    return 0;
}

static inline void htm_abort(void)
{
    __builtin_tabort(0);
}

#endif /* ISA */
#endif /* HTM_H */
