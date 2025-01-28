from setuptools import setup, Extension
from Cython.Build import cythonize

extensions = [
    Extension(
        "sort_array._core",
        sources=["sort_array/_core.pyx"],
        include_dirs=["include"],
        library_dirs=["build/src"],
        libraries=["sort_array"],
        language="c++"
    )
]

setup(
    name="sort_array",
    version="0.1.0",
    author="Abraham Sotelo",
    description="Python binding for C++ sort_array library",
    ext_modules=cythonize(extensions),
    packages=["sort_array"],
    package_dir={"sort_array": "sort_array"},
)