

#ifndef SCALAR_MAP_H
#define SCALAR_MAP_H

#include <stdint.h>

#include "khash.h"

#define sm_t(name) khash_t(name)
#define sm_init(name, type) KHASH_MAP_INIT_INT(name, type)

#define init_sm_u8 sm_init(sm_u8, uint8_t)
#define init_sm_i8 sm_init(sm_i8, int8_t)
#define init_sm_u16 sm_init(sm_u16, uint16_t)
#define init_sm_i16 sm_init(sm_i16, int16_t)
#define init_sm_u32 sm_init(sm_u32, uint32_t)
#define init_sm_i32 sm_init(sm_i32, int32_t)
#define init_sm_u64 sm_init(sm_u64, uint64_t)
#define init_sm_i64 sm_init(sm_i64, int64_t)
#define init_sm_f32 sm_init(sm_f32, float)
#define init_sm_f64 sm_init(sm_f64, double)

#define sm_create(name) kh_init(name)
#define sm_destroy(name, h) kh_destroy(name, h)
#define sm_get(name, h, k, v, found) \
    do { \
        khint_t sm_i = kh_get(name, h, k); \
        found = sm_i != kh_end(h); \
        if (found) v = kh_val(h, sm_i); \
    } while (0)
#define sm_dget(name, h, k, v, d) \
    do { \
        khint_t sm_i = kh_get(name, h, k); \
        v = sm_i != kh_end(h) ? kh_val(h, sm_i) : d; \
    } while (0)
#define sm_set(name, h, k, v) \
    do { \
        int sm_ret; \
        khint_t sm_i = kh_put(name, h, k, &sm_ret); \
        kh_val(h, sm_i) = v; \
    } while (0)


#define sm_u8_t sm_t(sm_u8)
#define sm_u8_create() sm_create(sm_u8)
#define sm_u8_destroy(h) sm_destroy(sm_u8, h)
#define sm_u8_get(h, k, v, found) sm_get(sm_u8, h, k, v, found)
#define sm_u8_dget(h, k, v, d) sm_dget(sm_u8, h, k, v, d)
#define sm_u8_set(h, k, v) sm_set(sm_u8, h, k, v)

#define sm_i8_t sm_t(sm_i8)
#define sm_i8_create() sm_create(sm_i8)
#define sm_i8_destroy(h) sm_destroy(sm_i8, h)
#define sm_i8_get(h, k, v, found) sm_get(sm_i8, h, k, v, found)
#define sm_i8_dget(h, k, v, d) sm_dget(sm_i8, h, k, v, d)
#define sm_i8_set(h, k, v) sm_set(sm_i8, h, k, v)

#define sm_u16_t sm_t(sm_u16)
#define sm_u16_create() sm_create(sm_u16)
#define sm_u16_destroy(h) sm_destroy(sm_u16, h)
#define sm_u16_get(h, k, v, found) sm_get(sm_u16, h, k, v, found)
#define sm_u16_dget(h, k, v, d) sm_dget(sm_u16, h, k, v, d)
#define sm_u16_set(h, k, v) sm_set(sm_u16, h, k, v)

#define sm_i16_t sm_t(sm_i16)
#define sm_i16_create() sm_create(sm_i16)
#define sm_i16_destroy(h) sm_destroy(sm_i16, h)
#define sm_i16_get(h, k, v, found) sm_get(sm_i16, h, k, v, found)
#define sm_i16_dget(h, k, v, d) sm_dget(sm_i16, h, k, v, d)
#define sm_i16_set(h, k, v) sm_set(sm_i16, h, k, v)

#define sm_u32_t sm_t(sm_u32)
#define sm_u32_create() sm_create(sm_u32)
#define sm_u32_destroy(h) sm_destroy(sm_u32, h)
#define sm_u32_get(h, k, v, found) sm_get(sm_u32, h, k, v, found)
#define sm_u32_dget(h, k, v, d) sm_dget(sm_u32, h, k, v, d)
#define sm_u32_set(h, k, v) sm_set(sm_u32, h, k, v)

#define sm_i32_t sm_t(sm_i32)
#define sm_i32_create() sm_create(sm_i32)
#define sm_i32_destroy(h) sm_destroy(sm_i32, h)
#define sm_i32_get(h, k, v, found) sm_get(sm_i32, h, k, v, found)
#define sm_i32_dget(h, k, v, d) sm_dget(sm_i32, h, k, v, d)
#define sm_i32_set(h, k, v) sm_set(sm_i32, h, k, v)

#define sm_u64_t sm_t(sm_u64)
#define sm_u64_create() sm_create(sm_u64)
#define sm_u64_destroy(h) sm_destroy(sm_u64, h)
#define sm_u64_get(h, k, v, found) sm_get(sm_u64, h, k, v, found)
#define sm_u64_dget(h, k, v, d) sm_dget(sm_u64, h, k, v, d)
#define sm_u64_set(h, k, v) sm_set(sm_u64, h, k, v)

#define sm_i64_t sm_t(sm_i64)
#define sm_i64_create() sm_create(sm_i64)
#define sm_i64_destroy(h) sm_destroy(sm_i64, h)
#define sm_i64_get(h, k, v, found) sm_get(sm_i64, h, k, v, found)
#define sm_i64_dget(h, k, v, d) sm_dget(sm_i64, h, k, v, d)
#define sm_i64_set(h, k, v) sm_set(sm_i64, h, k, v)

#define sm_f32_t sm_t(sm_f32)
#define sm_f32_create() sm_create(sm_f32)
#define sm_f32_destroy(h) sm_destroy(sm_f32, h)
#define sm_f32_get(h, k, v, found) sm_get(sm_f32, h, k, v, found)
#define sm_f32_dget(h, k, v, d) sm_dget(sm_f32, h, k, v, d)
#define sm_f32_set(h, k, v) sm_set(sm_f32, h, k, v)

#define sm_f64_t sm_t(sm_f64)
#define sm_f64_create() sm_create(sm_f64)
#define sm_f64_destroy(h) sm_destroy(sm_f64, h)
#define sm_f64_get(h, k, v, found) sm_get(sm_f64, h, k, v, found)
#define sm_f64_dget(h, k, v, d) sm_dget(sm_f64, h, k, v, d)
#define sm_f64_set(h, k, v) sm_set(sm_f64, h, k, v)

#endif // SCALAR_MAP_H

