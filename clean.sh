#!/bin/bash

cd $(dirname $0)
rm -rf build
rm -rf dist
rm -r sort_array.egg-info
mkdir build
cd build