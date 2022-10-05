#!/bin/bash
gcc -wall -pendatic -werror -wextra -c *.c
ar rc liball.a *.o
