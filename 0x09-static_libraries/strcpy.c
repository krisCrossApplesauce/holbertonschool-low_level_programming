#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies string (pointed by src var) to dest
 *
 * @dest: buffer(?) like an array ig, something that contains content
 *
 * @src: string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, sl;

	sl = 0;

	while (src[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i <= sl; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
