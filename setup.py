from setuptools import setup, Extension
from Cython.Build import cythonize
import os

OUTPUT_DIR = "build/bindings"
MODULE_NAME = "sort_array"

extensions = [
    Extension(
        MODULE_NAME,                   # Name of the module
        sources=["bindings/sort_array.pyx"],
        include_dirs=["include"],
        library_dirs=["build/src"],  # Path to the static library
        libraries=["sort_array"],    # Name of the static library
        language="c++"
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