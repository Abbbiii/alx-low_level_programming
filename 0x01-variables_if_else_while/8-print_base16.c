#include <stdlib>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * using the main function
 *
 * Return: 0
 */

int main(void)
{
	int d;
	char low;

	for (d = '0'; d <= '9'; d++)
		putchad(d);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
