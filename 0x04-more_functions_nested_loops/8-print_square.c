#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: returns nothing
 */

void print_square(int size)
{
	int z1, z2;

	if (size > 0)
	{
		for (z1 = 0; z1 < size; z1++)
		{
			for (z2 = 0; z2 < (size - 1); z2++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
