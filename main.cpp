#include <iostream>
#include "sort_array.h"

int main() {
    // Initialize an array of integers
    int numbers[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);  // Calculate the size of the array

    // Print the original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Call the sortArray function
    sortArray(numbers, size);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;


  int empty[] = {};
  int empty_size = sizeof(empty) / sizeof(empty[0]);
  std::cout << "Empty size: " << empty_size << std::endl;
  std::cin.get();

    return 0;
}