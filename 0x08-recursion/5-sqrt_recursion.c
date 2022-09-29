#include "main.h"

/**
 *  _sqrt_recursion - natural square root of a number
 *  @n: int arg
 *  Return: int
 */

int _sqrt_recursion(int n)

{

	if (n < 0)

	{

		return (-1);

	}

	return (helper(n, 0));
}
