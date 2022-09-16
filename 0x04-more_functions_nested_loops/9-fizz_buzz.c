#include <stdio.h>

/**
 * fizz_buzz - prints numbers 1 to 100 and fizz buzz
 * @h: the character to be used
 * Return: 0
 */

void fizz_buzz(int h)
{
	int h = 1;

	while (h <= 100)
	{
		if (h % 3 == 0 && h % 5 == 0)
			printf("FizzBuzz ");
		else if (h % 5 == 0)
		{
			if (h == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz ");
		}
		else if (h % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", h);
	h++;
	}
return (0);
}
