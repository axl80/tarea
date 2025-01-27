#include "unity.h"

// Declare the test functions from test_sort_array.c
extern void test_sortArray_sortsPositiveNumbers(void);
extern void test_sortArray_sortsNegativeNumbers(void);
extern void test_sortArray_handlesEmptyArray(void);

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_sortArray_sortsPositiveNumbers);
    RUN_TEST(test_sortArray_sortsNegativeNumbers);
    RUN_TEST(test_sortArray_handlesEmptyArray);

    return UNITY_END();
}
