
#!/bin/bash

set -e

echo "creating build directory..."
mkdir -p build/

echo "building test binary..."
gcc -Wall -Wextra -Wfloat-equal -Wno-unused-variable -pedantic -Wno-unused-parameter -g -o build/testsm src/test_sm.c

echo "running test binary..."
./build/testsm

echo "success!"
