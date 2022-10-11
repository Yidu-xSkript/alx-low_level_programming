#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
# Compiling Shared Library for Holberton
gcc -shared -o liball.so *.o