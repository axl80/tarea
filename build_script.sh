#!/bin/bash
. /venv/bin/activate
cd $(dirname $0)
./clean.sh
cd build
cmake -G Ninja ..
ninja
ctest
pip install $(ls ../dist/sort_array-*.whl) --force-reinstall
python -m unittest discover -s ../tests/python
