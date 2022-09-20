#include "main.h"

/**
 * print_array - prints arrray
 * @a: array
 * @n: no. of elements of arrays to be printed
 * Return string to stdout
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)

	{
		if (i != n - 1)

		{
			printf("%d, ", a[i]);

		}

		else
	{
		printf("%d", a[i]);

	}
	}

	putchar('\n');
}
