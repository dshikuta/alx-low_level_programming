#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c : the character to print
 *
 * Return: on success 1
 * on error, -1 is returned, an errno is set appropriaately
 */
int _putchar(char c)
{
	retun (write(1, &c, 1));

}
