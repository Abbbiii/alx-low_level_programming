# include "main.h"

/**
 * _isdigit - checks whether a character is a digit or not
 * @b: is a character to be tested
 * Return: 1 if it is or 0 if it is not
 */

int _isdigit(int b)
{
	if ((b >= 48) && (b <= 57))
	{
		return (1);
	}

	return (0);
}
