#include <stdio.h>
#include "holberton.h"

/**
 * _strncat - combines (concatenates) two strings
 * ^but only a certain amount from the second given string
 *
 * @dest: pointer to first string and destination of combined strings
 *
 * @src: pointer to second string
 *
 * @n: int, amount to be used of second string
 *
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, dl, sl;

	dl = 0;

	sl = 0;

	while (dest[dl] != '\0')
	{
		dl++;
	}

	while (src[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i <= sl && i < n; i++)
	{
		dest[dl] = src[i];
		dl++;
	}

	return (dest);
}
