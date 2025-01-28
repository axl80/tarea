# Create a static library for sort_array
add_library(sort_array STATIC sort_array.cpp)

# Make the library available to other targets
target_include_directories(sort_array PUBLIC include)