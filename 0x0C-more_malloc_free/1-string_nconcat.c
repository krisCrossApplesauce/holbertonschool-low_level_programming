#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string
 *
 * @s2: string
 *
 * @n: unsigned int, number of bytes to be used of s2
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, sl;

	char *a;

	sl = 0;

	while (s1[sl] != '\0')
	{
		sl++;
	}

	a = malloc((sizeof(char) * sl) + n);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < sl; i++)
	{
		a[i] = s1[i];
	}

	for (i = 0; i <= n; i++)
	{
		if (i < n)
		{
			a[i + sl] = s2[i];
		}
		else
		{
			a[i + sl] = '\0';
		}
	}

	return (a);
}
