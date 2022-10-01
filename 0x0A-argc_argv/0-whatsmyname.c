#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argv: the argument
 * @argc: Count arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
