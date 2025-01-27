#include "sort_array.h"
#include <algorithm> // for std::sort

void sortArray(int* numbers, int size)
{
    if (!numbers || size <= 1) {
        return; // nothing to sort
    }
    std::sort(numbers, numbers + size);
}