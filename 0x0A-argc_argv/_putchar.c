#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1, on error -1, and errno is set appropriately.
 */

int _pitchar(char c)
{
	return (write(1, &c, 1));
}
