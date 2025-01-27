from setuptools import setup, Extension
from Cython.Build import cythonize
import os

OUTPUT_DIR = "build/bindings"
MODULE_NAME = "sort_array"

extensions = [
    Extension(
        MODULE_NAME,                   # Name of the module
        sources=[
            os.path.join("bindings", "sort_array.pyx"),  # Cython source
            os.path.join("src", "sort_array.cpp"),       # C++ source
        ],
        include_dirs=[
            os.path.join("include"),    # Path to sort_array.h
        ],
        language="c++",
        extra_compile_args=["-std=c++11"],
    )
]

setup(
    name=MODULE_NAME,
    version="0.1.0",
    ext_modules=cythonize(extensions, build_dir=OUTPUT_DIR),
    options={
        'build_ext': {
            'build_lib': OUTPUT_DIR,  # Output directory for the .so file
            'build_temp': f'{OUTPUT_DIR}/temp'
        },
    },
)