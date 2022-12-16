#include <stdio.h>
#include "main.h"

/**
 * _abs - function that gives an absolute value of the input number
 * @b: is the int that is going to be used in the function
 * Return: 0
 */

int _abs(int b)

{
	if (b >= 0)
		return (b);
	else
		return (b * -1);
}
