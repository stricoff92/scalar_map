
#include <stdbool.h>
#include <stdio.h>
#include <assert.h>
#include <stdint.h>

#include "scalar_map.h"

sm_define(sm_int, int32_t)
sm_define(sm_uint, uint32_t)
sm_define(sm_float, float)
sm_define(sm_double, double)


#define TEST_STARTING printf("running test %s... ", __func__);
#define TEST_PASSED printf("ok\n");


void test_sm_create(void) {
    TEST_STARTING

    sm_t(sm_int) *h = sm_create(sm_int);
    assert(h != NULL);
    sm_destroy(sm_int, h);

    sm_t(sm_uint) *h2 = sm_create(sm_uint);
    assert(h2 != NULL);
    sm_destroy(sm_uint, h2);

    sm_t(sm_float) *h3 = sm_create(sm_float);
    assert(h3 != NULL);
    sm_destroy(sm_float, h3);

    sm_t(sm_double) *h4 = sm_create(sm_double);
    assert(h4 != NULL);
    sm_destroy(sm_double, h4);

    TEST_PASSED
}

void test_sm_get_keys_are_found(void) {
    TEST_STARTING

    sm_t(sm_int) *h = sm_create(sm_int);
    assert(h);

    sm_set(sm_int, h, 1864, 2354);
    sm_set(sm_int, h, 1865, 6577);
    sm_set(sm_int, h, 1866, 5687);

    int32_t v;
    bool found;
    sm_get(sm_int, h, 1864, v, found);
    assert(found);
    assert(v == 2354);

    sm_get(sm_int, h, 1865, v, found);
    assert(found);
    assert(v == 6577);

    sm_get(sm_int, h, 1866, v, found);
    assert(found);
    assert(v == 5687);

    TEST_PASSED
}

void test_sm_get_keys_are_not_found(void) {
    TEST_STARTING

    sm_t(sm_int) *h = sm_create(sm_int);
    assert(h);

    sm_set(sm_int, h, 1864, 2354);
    sm_set(sm_int, h, 1865, 6577);
    sm_set(sm_int, h, 1866, 5687);

    int32_t v;
    bool found;
    sm_get(sm_int, h, 1867, v, found);
    assert(!found);

    sm_get(sm_int, h, 1868, v, found);
    assert(!found);

    sm_get(sm_int, h, 1869, v, found);
    assert(!found);


    TEST_PASSED
}


int main() {

    test_sm_create();

    test_sm_get_keys_are_found();
    test_sm_get_keys_are_not_found();

    return 0;
}
