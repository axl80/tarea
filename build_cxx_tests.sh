#!/bin/bash
g++ -Iinclude -Itests/cxx/unity tests/cxx/test_sort_array.c tests/cxx/unity/unity.c src/sort_array.cpp tests/cxx/test_runner.c -o run_tests