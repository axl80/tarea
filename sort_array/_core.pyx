# distutils: language = c++

from libc.stdlib cimport malloc, free

cdef extern from "sort_array.h":
    void sortArray(int* numbers, int size)

def py_sort_array(list numbers):
    """
    Python wrapper for the C++ sortArray function.
    Accepts a Python list of integers, sorts it in-place.
    """
    cdef int size = len(numbers)
    if size <= 1:
        return  # Nothing to sort

    # Validate that all elements are ints
    for x in numbers:
        if not isinstance(x, int):
            raise TypeError("All elements of the list must be integers")

    # Allocate a temporary C array
    cdef int* temp_array = <int*> malloc(size * sizeof(int))
    if not temp_array:
        raise MemoryError("Failed to allocate memory for sorting")

    cdef int i
    try:
        # Copy numbers from Python list to the C array
        for i in range(size):
            temp_array[i] = numbers[i]

        # Call the C++ function to sort
        sortArray(temp_array, size)

        # Copy the sorted numbers back into the Python list
        for i in range(size):
            numbers[i] = temp_array[i]
    finally:
        free(temp_array)