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
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
