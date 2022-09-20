#include "main.h"

/**
 * print_array - prints arrray
 * @a: arry
 * @n: no. of elements of arrays to be printed
 * Return string to stdout
 */

void print_array(int *a, int n)

{
	int i = 0;

	for (; i < n; i++)

	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	putchar("\n");
}
