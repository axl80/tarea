#include "unity.h"
#include "sort_array.h"

void test_sortArray_sortsPositiveNumbers() {
    int numbers[] = {3, 1, 4, 1, 5};
    int expected[] = {1, 1, 3, 4, 5};
    sortArray(numbers, 5);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, numbers, 5);
}

void test_sortArray_sortsNegativeNumbers() {
    int numbers[] = {-3, -1, -4, -1, -5};
    int expected[] = {-5, -4, -3, -1, -1};
    sortArray(numbers, 5);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, numbers, 5);
}

void test_sortArray_handlesEmptyArray() {
    int numbers[] = {};
    int expected[] = {};
    sortArray(numbers, 0);
    if (sizeof(numbers) / sizeof(numbers[0]) > 0) {
        TEST_ASSERT_EQUAL_INT_ARRAY(expected, numbers, 0);
    } else {
        TEST_PASS_MESSAGE("Array is empty, nothing to compare.");
    }
}