#include <stdio.h>
#include "holberton.h"

/**
 * _strncpy - copies a string to a pointer
 * ^replacing n amount of the original contents
 *
 * @dest: pointer, where string is copied to
 *
 * @src: pointer, where string is copied from
 *
 * @n: int, amount of char from dest to be replaced by src
 *
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, sl;

	sl = 0;

	while (src[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i <= sl && i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
