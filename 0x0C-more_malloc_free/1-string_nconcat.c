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
	unsigned int i, s1l, s2l;

	char *a;

	if (s1 == NULL && s2 == NULL)
	{ return (NULL); }

	if (s1 == NULL)
	{ s1 = ""; }

	if (s2 == NULL)
	{ s2 = ""; }

	s1l = 0;

	s2l = 0;

	while (s1[s1l] != '\0')
	{ s1l++; }

	while (s2[s2l] != '\0')
	{ s2l++; }

	if (n > s2l)
	{ n = s2l; }

	a = malloc((sizeof(char) * (s1l + 1)) + n);

	if (a == NULL)
	{ return (NULL); }

	for (i = 0; i < s1l; i++)
	{ a[i] = s1[i]; }

	for (i = 0; i <= (n + 1); i++)
	{
		if (i < n)
		{ a[i + s1l] = s2[i]; }
		else
		{ a[i + s1l] = '\0'; }
	}

	return (a);
}
