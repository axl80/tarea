add_custom_target(build_python_bindings ALL
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    COMMAND python -m build --wheel --no-isolation
    DEPENDS 
        sort_array
        "${CMAKE_SOURCE_DIR}/sort_array/_core.pyx"
        "${CMAKE_SOURCE_DIR}/pyproject.toml"
    COMMENT "Building Python bindings build"
)

add_dependencies(build_python_bindings sort_array)