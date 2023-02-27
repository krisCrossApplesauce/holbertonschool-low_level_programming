#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: unsigned int, amount of allocated memory
 *
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	int *i;

	i = malloc(b);

	if (malloc(b) == NULL)
	{
		exit(98);
	}

	return (i);
}
