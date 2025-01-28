# Add Python executable detection

# Add a custom target to run setup.py
add_custom_target(build_python_bindings ALL
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMAND python setup.py bdist_wheel
    DEPENDS 
        sort_array
        "${CMAKE_SOURCE_DIR}/sort_array/_core.pyx"
        "${CMAKE_SOURCE_DIR}/setup.py"
    COMMENT "Building Python bindings with setup.py"
)

add_dependencies(build_python_bindings sort_array)