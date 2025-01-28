project(tests C CXX)

# Add the Unity test executable
add_executable(run_cxx_tests
    cxx/test_sort_array.c
    cxx/test_runner.c
    cxx/unity/unity.c
)

# Include Unity headers directory
target_include_directories(run_cxx_tests PRIVATE cxx/unity)

# Link the sort_array library to the test executable
target_link_libraries(run_cxx_tests PRIVATE sort_array)

# Add a test target for CTest integration
# Register test
add_test(
    NAME sort_array_tests
    COMMAND run_cxx_tests
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
)