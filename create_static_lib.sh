#!/bin/bash
gcc -wall -wextra -werror -pedantic -c *.c
ar c liball.a *.o
