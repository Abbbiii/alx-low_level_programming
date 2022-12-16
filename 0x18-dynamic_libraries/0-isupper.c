#include "main.h"

/**
 * _isupper - checks if a character is uppercase or lowercase
 * @a: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */

int _isupper(int a)
{
	if ((a >= 'A') && (a <= 'Z'))
	{
		return (1);
	}

	return (0);
}
