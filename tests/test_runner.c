#include "unity.h"
#include "test_sort_array.c"  // Include the test file(s)

void setUp(void) {
    // set stuff up here
}

void tearDown(void) {
    // clean stuff up here
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sortArray_sortsPositiveNumbers);
    RUN_TEST(test_sortArray_sortsNegativeNumbers);
    RUN_TEST(test_sortArray_handlesEmptyArray);
    return UNITY_END();
}