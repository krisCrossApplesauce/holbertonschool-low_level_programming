#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer, where memory is copied to
 *
 * @src: pointer, where memory is copied from
 *
 * @n: unsigned int, number of bytes to be copied
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
