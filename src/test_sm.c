
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include <math.h>

#include "scalar_map.h"

#define float_equal(a, b) (fabs(a - b) < 0.0001)

init_sm_u8
init_sm_i8
init_sm_u16
init_sm_i16
init_sm_u32
init_sm_i32
init_sm_u64
init_sm_i64
init_sm_f32
init_sm_f64

#define TEST_STARTING printf("running test %s... ", __func__);
#define TEST_PASSED printf("ok\n");

void test_u8_sm(void) {
    TEST_STARTING
    sm_u8_t *u8h = sm_u8_create();
    assert(u8h);
    bool found;
    uint8_t v;
    sm_u8_set(u8h, 76576, 125);
    sm_u8_set(u8h, 76577, 126);
    sm_u8_set(u8h, 76578, 232);

    sm_u8_get(u8h, 76576, v, found);
    assert(found);
    assert(v == 125);
    sm_u8_get(u8h, 76577, v, found);
    assert(found);
    assert(v == 126);
    sm_u8_get(u8h, 76578, v, found);
    assert(found);
    assert(v == 232);

    sm_u8_get(u8h, 87667, v, found);
    assert(!found);

    sm_u8_dget(u8h, 76577, v, 42);
    assert(v == 126);
    sm_u8_dget(u8h, 654, v, 42);
    assert(v == 42);

    sm_u8_destroy(u8h);
    TEST_PASSED
}

void test_i8_sm(void) {
    TEST_STARTING
    sm_i8_t *i8h = sm_i8_create();
    assert(i8h);
    bool found;
    int8_t v;
    sm_i8_set(i8h, 76576, 125);
    sm_i8_set(i8h, 76577, 126);
    sm_i8_set(i8h, 76578, -98);

    sm_i8_get(i8h, 76576, v, found);
    assert(found);
    assert(v == 125);
    sm_i8_get(i8h, 76577, v, found);
    assert(found);
    assert(v == 126);
    sm_i8_get(i8h, 76578, v, found);
    assert(found);
    assert(v == -98);

    sm_i8_get(i8h, 87667, v, found);
    assert(!found);

    sm_i8_dget(i8h, 76577, v, 42);
    assert(v == 126);
    sm_i8_dget(i8h, 654, v, 42);
    assert(v == 42);

    sm_i8_destroy(i8h);
    TEST_PASSED
}


void test_u16_sm(void) {
    TEST_STARTING
    sm_u16_t *u16h = sm_u16_create();
    assert(u16h);
    bool found;
    uint16_t v;
    sm_u16_set(u16h, 76576, 125);
    sm_u16_set(u16h, 76577, 54214);
    sm_u16_set(u16h, 76578, 232);

    sm_u16_get(u16h, 76576, v, found);
    assert(found);
    assert(v == 125);
    sm_u16_get(u16h, 76577, v, found);
    assert(found);
    assert(v == 54214);
    sm_u16_get(u16h, 76578, v, found);
    assert(found);
    assert(v == 232);

    sm_u16_get(u16h, 87667, v, found);
    assert(!found);

    sm_u16_dget(u16h, 76577, v, 42);
    assert(v == 54214);
    sm_u16_dget(u16h, 654, v, 42);
    assert(v == 42);

    sm_u16_destroy(u16h);
    TEST_PASSED
}

void test_i16_sm(void) {
    TEST_STARTING
    sm_i16_t *i16h = sm_i16_create();
    assert(i16h);
    bool found;
    int16_t v;
    sm_i16_set(i16h, 76576, 28541);
    sm_i16_set(i16h, 76577, -31254);
    sm_i16_set(i16h, 76578, 232);

    sm_i16_get(i16h, 76576, v, found);
    assert(found);
    assert(v == 28541);
    sm_i16_get(i16h, 76577, v, found);
    assert(found);
    assert(v == -31254);
    sm_i16_get(i16h, 76578, v, found);
    assert(found);
    assert(v == 232);

    sm_i16_get(i16h, 87667, v, found);
    assert(!found);

    sm_i16_dget(i16h, 76577, v, 42);
    assert(v == -31254);
    sm_i16_dget(i16h, 654, v, 42);
    assert(v == 42);

    sm_i16_destroy(i16h);
    TEST_PASSED
}

void test_u32_sm(void) {
    TEST_STARTING
    sm_u32_t *u32h = sm_u32_create();
    assert(u32h);
    bool found;
    uint32_t v;
    sm_u32_set(u32h, 76576, 3543654654);
    sm_u32_set(u32h, 76577, 54214);
    sm_u32_set(u32h, 76578, 232);

    sm_u32_get(u32h, 76576, v, found);
    assert(found);
    assert(v == 3543654654);
    sm_u32_get(u32h, 76577, v, found);
    assert(found);
    assert(v == 54214);
    sm_u32_get(u32h, 76578, v, found);
    assert(found);
    assert(v == 232);

    sm_u32_get(u32h, 87667, v, found);
    assert(!found);

    sm_u32_dget(u32h, 76577, v, 42);
    assert(v == 54214);
    sm_u32_dget(u32h, 654, v, 42);
    assert(v == 42);

    sm_u32_destroy(u32h);
    TEST_PASSED
}

void test_i32_sm(void) {
    TEST_STARTING
    sm_i32_t *i32h = sm_i32_create();
    assert(i32h);
    bool found;
    int32_t v;
    sm_i32_set(i32h, 76576, 1543654654);
    sm_i32_set(i32h, 76577, -1543654654);
    sm_i32_set(i32h, 76578, 232);

    sm_i32_get(i32h, 76576, v, found);
    assert(found);
    assert(v == 1543654654);
    sm_i32_get(i32h, 76577, v, found);
    assert(found);
    assert(v == -1543654654);
    sm_i32_get(i32h, 76578, v, found);
    assert(found);
    assert(v == 232);

    sm_i32_get(i32h, 87667, v, found);
    assert(!found);

    sm_i32_dget(i32h, 76577, v, 42);
    assert(v == -1543654654);
    sm_i32_dget(i32h, 654, v, 42);
    assert(v == 42);

    sm_i32_destroy(i32h);
    TEST_PASSED
}

void test_u64_sm(void) {
    TEST_STARTING
    sm_u64_t *u64h = sm_u64_create();
    assert(u64h);
    bool found;
    uint64_t v;
    sm_u64_set(u64h, 76576, 3543654654);
    sm_u64_set(u64h, 76577, 54214);
    sm_u64_set(u64h, 76578, 232);

    sm_u64_get(u64h, 76576, v, found);
    assert(found);
    assert(v == 3543654654);
    sm_u64_get(u64h, 76577, v, found);
    assert(found);
    assert(v == 54214);
    sm_u64_get(u64h, 76578, v, found);
    assert(found);
    assert(v == 232);

    sm_u64_get(u64h, 87667, v, found);
    assert(!found);

    sm_u64_dget(u64h, 76577, v, 42);
    assert(v == 54214);
    sm_u64_dget(u64h, 654, v, 42);
    assert(v == 42);

    sm_u64_destroy(u64h);
    TEST_PASSED
}

void test_i64_sm(void) {
    TEST_STARTING
    sm_i64_t *i64h = sm_i64_create();
    assert(i64h);
    bool found;
    int64_t v;
    sm_i64_set(i64h, 76576, 1543654654);
    sm_i64_set(i64h, 76577, -1543654654);
    sm_i64_set(i64h, 76578, 232);

    sm_i64_get(i64h, 76576, v, found);
    assert(found);
    assert(v == 1543654654);
    sm_i64_get(i64h, 76577, v, found);
    assert(found);
    assert(v == -1543654654);
    sm_i64_get(i64h, 76578, v, found);
    assert(found);
    assert(v == 232);

    sm_i64_get(i64h, 87667, v, found);
    assert(!found);

    sm_i64_dget(i64h, 76577, v, 42);
    assert(v == -1543654654);
    sm_i64_dget(i64h, 654, v, 42);
    assert(v == 42);

    sm_i64_destroy(i64h);
    TEST_PASSED
}

void test_f32_sm(void) {
    TEST_STARTING
    sm_f32_t *f32h = sm_f32_create();
    assert(f32h);
    bool found;
    float v;
    sm_f32_set(f32h, 76576, 43523.32F);
    sm_f32_set(f32h, 76577, -543.54F);
    sm_f32_set(f32h, 76578, 12312.543F);

    sm_f32_get(f32h, 76576, v, found);
    assert(found);
    assert(float_equal(v, 43523.32F));
    sm_f32_get(f32h, 76577, v, found);
    assert(found);
    assert(float_equal(v, -543.54F));
    sm_f32_get(f32h, 76578, v, found);
    assert(found);
    assert(float_equal(v, 12312.543F));

    sm_f32_get(f32h, 87667, v, found);
    assert(!found);

    sm_f32_dget(f32h, 76577, v, 42);
    assert(float_equal(v, -543.54F));
    sm_f32_dget(f32h, 654, v, 42);
    assert(float_equal(v, 42));

    sm_f32_destroy(f32h);
    TEST_PASSED
}

void test_f64_sm(void) {
    TEST_STARTING
    sm_f64_t *f64h = sm_f64_create();
    assert(f64h);
    bool found;
    double v;
    sm_f64_set(f64h, 76576, 43523.32);
    sm_f64_set(f64h, 76577, -543.54);
    sm_f64_set(f64h, 76578, 12312.543);

    sm_f64_get(f64h, 76576, v, found);
    assert(found);
    assert(float_equal(v, 43523.32));
    sm_f64_get(f64h, 76577, v, found);
    assert(found);
    assert(float_equal(v, -543.54));
    sm_f64_get(f64h, 76578, v, found);
    assert(found);
    assert(float_equal(v, 12312.543));

    sm_f64_get(f64h, 87667, v, found);
    assert(!found);

    sm_f64_dget(f64h, 76577, v, 42);
    assert(float_equal(v, -543.54));
    sm_f64_dget(f64h, 654, v, 42);
    assert(float_equal(v, 42));

    sm_f64_destroy(f64h);
    TEST_PASSED
}

int main() {

    test_u8_sm();
    test_i8_sm();
    test_u16_sm();
    test_i16_sm();
    test_u32_sm();
    test_i32_sm();
    test_u64_sm();
    test_i64_sm();
    test_f32_sm();
    test_f64_sm();

    return 0;
}
