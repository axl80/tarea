#include "unity.h"
#include "sort_array.h"

// Test 1: Sorting a list of positive numbers
void test_sortArray_sortsPositiveNumbers(void)
{
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int expected[] = {1, 2, 5, 5, 6, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sortArray(numbers, size);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, numbers, size);
}

// Test 2: Sorting a list of negative numbers
void test_sortArray_sortsNegativeNumbers(void)
{
    int numbers[] = {-3, -1, -4, -1, -5};
    int expected[] = {-5, -4, -3, -1, -1};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    sortArray(numbers, size);
    TEST_ASSERT_EQUAL_INT_ARRAY(expected, numbers, size);
}

// Test 3: Handling an empty array
void test_sortArray_handlesEmptyArray(void)
{
    int numbers[] = {};
    int size = 0; // No elements

    // Should not crash or do anything unexpected
    sortArray(numbers, size);
    TEST_PASS_MESSAGE("Empty array - Nothing to compare");
}