#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two integers.
 * @argv: argument vector
 * @argc: argument count
 *
 * Return: 0 if success or 1 if false
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[1]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
