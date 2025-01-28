## CXX Testing
- Build the test `./build_cxx_test.sh`
- Run the test `run_tests`

## Binding
- Build the python library `python setup.py build_ext`
- Run the test `python -m unittest discover -s tests/python`

## Build and run tests with CMake
cd build
```bash
mkdir -p build
cmake -G Ninja ..
ninja
ctest
```