#ifndef __TESTS_H__
#include "tests.h"
#endif

void test_1(void)
{
    TEST_ASSERT_EQUAL(2+2, 4);
}

void test_2(void)
{
    TEST_ASSERT_EQUAL(1+1, 2);
}
