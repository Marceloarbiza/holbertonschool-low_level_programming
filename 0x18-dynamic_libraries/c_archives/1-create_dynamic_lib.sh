#!/bin/bash
gcc -Wall -Werror -Wextra -L. -pedantic -fPIC *.c -shared -o liball.so
