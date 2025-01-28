# Add Python executable detection
set(BINDINGS_DIR ${CMAKE_SOURCE_DIR}/bindings)

# Add a custom target to run setup.py
add_custom_target(build_python_bindings ALL
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMAND python setup.py build_ext
    DEPENDS 
        sort_array
        "${BINDINGS_DIR}/sort_array.pyx"
        "${CMAKE_SOURCE_DIR}/setup.py"
    COMMENT "Building Python bindings with setup.py"
)

add_dependencies(build_python_bindings sort_array)