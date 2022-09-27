#include "main.h"

/**
 * _strpbrk - searches for a string for any of a set of bytes
 * @s: string to check
 * @accept: string to check against
 *
 * Return: pointers to byte in s that matches or null if no match
 */

{
	unsigned int i, j;

	for (i = 0; s[i]; i++);  
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
