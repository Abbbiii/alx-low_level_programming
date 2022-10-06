#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @d: memory to allocate
 *
 * Return: pointer if success, terminate if error
 */

void *malloc_checked(unsigned int d)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
