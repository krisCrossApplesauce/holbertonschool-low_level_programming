#include <stdio.h>
#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer, where the memory is filled, starting at beginning
 *
 * @b: char, the constant byte that the memory is filled by
 *
 * @n: int, the number of how many bytes of memory to be filled
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
