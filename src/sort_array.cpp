#include "sort_array.h"
#include <algorithm>  // For std::sort

void sortArray(int* numbers, int size) {
    // Use std::sort to sort the array in-place
    std::sort(numbers, numbers + size);
}