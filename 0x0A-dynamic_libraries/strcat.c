#include <stdio.h>
#include "main.h"

/**
 * _strcat - combine (concatenates) two strings
 *
 * @dest: pointer to first string and destination of combined strings
 *
 * @src: pointer to second string
 *
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, sl, dl;

	sl = 0;

	dl = 0;

	while (src[sl] != '\0')
	{
		sl++;
	}

	while (dest[dl] != '\0')
	{
		dl++;
	}

	for (i = 0; i <= sl; i++)
	{
		dest[dl] = src[i];
		dl++;
	}

	return (dest);
}
