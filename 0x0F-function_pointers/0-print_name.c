#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: char pointer
 * @f pointer
 * return: void
 */
void print_name(char *name, void (*f)(char *))
{

	if (name && f)

	f(name);
}


