#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments a program recieves
 *
 * @argc: number of arguments.
 * @argv: the argument
 *
 * Return: Always 0 if success.
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[]);
	}
	return (0);
}
