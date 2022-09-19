#include "main.h"

/**
 * swap_int - swaps the valu of two intergers
 * @a: integer to swap
 * @b: intger to swap
 * Return void
 */
void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
