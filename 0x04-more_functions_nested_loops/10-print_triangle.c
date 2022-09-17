#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size parameter
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int d1, d2;

	if (size > 0)
	{
		for (d1 = 0; d1 <= size; d1++)
		{
			for ((d2 = size - d1); d2 > 0; d2--)
			{
				putchar(' ');
			}
			for (d2 = 0; d2 < d1; d2++)
			{
				putchar('#');
			}
			if (d1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
