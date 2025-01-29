#!python3

import sort_array
import time
import random

def quicksort(arr):
  if len(arr) <= 1:
    return arr
  pivot = arr[len(arr) // 2]
  left = [x for x in arr if x < pivot]
  middle = [x for x in arr if x == pivot]
  right = [x for x in arr if x > pivot]
  return quicksort(left) + middle + quicksort(right)

numbers1 = [random.randint(1, 1000000) for _ in range(10000000)]
numbers2 = numbers1.copy()
numbers3 = numbers1.copy()

start_time = time.time()
numbers1 = quicksort(numbers1)
end_time = time.time()
execution_time = end_time - start_time
print(f"Quicksort Python implementation time: {execution_time} seconds")


start_time = time.time()
numbers2.sort()
end_time = time.time()
execution_time = end_time - start_time
print(f"Python built-in sort time: {execution_time} seconds")


start_time = time.time()
sort_array.py_sort_array(numbers3)
end_time = time.time()
execution_time = end_time - start_time
print(f"C++ implementation time: {execution_time} seconds")