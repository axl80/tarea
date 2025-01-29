# C++ implementation for Python of a sort function

## Getting started

- Download the python package from [here](https://github.com/80sax/build_eng/releases/download/0.1.0/sort_array-0.1.0-cp312-cp312-linux_x86_64.whl/)
- Install the package `pip install sort_array-0.1.0-cp312-cp312-linux_x86_64.whl`
- In your python implementation import the package `import sort_array`

### **🔹 Function: `py_sort_array()`**
The `py_sort_array()` function sorts a given list in ascending order.

### **🔹 Usage**
To use this function, call it with a list as an argument:

```python
from sort_array import py_sort_array

# Example usage
numbers = [5, 2, 8, 1, 3]
sorted_numbers = py_sort_array(numbers)
print(sorted_numbers)  # Output: [1, 2, 3, 5, 8]
```
You can find an example in [performance-tests.py](tests/performance-test.py) file.

## CI
- The ci [pipeline](.github/workflows/pipeline.yaml) runs in Github actions.
- If the [Dockerfile](Dockerfile) changes it triggers a job to build and publish the docker image in which the python package is built
- Compiles the C++ library, calls cython to perfrom the binding
- Creates the python wheel
- Perform unit test
- Publish the python wheel
- Run a performance test


## Development

- To modify the C++ implementation, please refer to the
- C++ code [sort_array.cpp](src/sort_array.cpp)
- Biding code [_core.pyx](sort_array/_core.pyx)

### **Execute individual tasks**

### CXX Testing
- Build the test `./build_cxx_test.sh`
- Run the test `run_tests`

### Binding
- Build the python library `python setup.py build_ext`
- Run the test `python -m unittest discover -s tests/python`

### Build and run tests with CMake during development
```bash
cd build
mkdir -p build
cmake -G Ninja ..
ninja
ctest
pip install ../dist/sort_array-0.1.0-cp312-cp312-linux_x86_64.whl --force-reinstall
python -m unittest discover -s ../tests/python
```

### How to run locally all the build process during developement
`./build_script.sh`

### Clean the local environment
`./clean.sh`