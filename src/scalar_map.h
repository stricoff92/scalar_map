

#ifndef SCALAR_MAP_H
#define SCALAR_MAP_H

#include <stdint.h>
#include <stdbool.h>

#include "khash.h"

#define sm_t(name) khash_t(name)
#define sm_define(name, type) KHASH_MAP_INIT_INT(name, type)
#define sm_create(name) kh_init(name)
#define sm_destroy(name, h) kh_destroy(name, h)
#define sm_get(name, h, k, v, found) \
    do { \
        khint_t sm_i = kh_get(name, h, k); \
        found = sm_i != kh_end(h); \
        if (found) v = kh_val(h, sm_i); \
    } while (0)
#define sm_set(name, h, k, v) \
    do { \
        int sm_ret; \
        khint_t sm_i = kh_put(name, h, k, &sm_ret); \
        kh_val(h, sm_i) = v; \
    } while (0)

#endif // SCALAR_MAP_H