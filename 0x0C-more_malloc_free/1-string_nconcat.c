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
	unsigned int i, ii, s1l, s2l;

	char *a;

	if (s1 == NULL && s2 == NULL)
	{ return (NULL); }
	if (s1 == NULL)
	{ s1 = ""; }
	if (s2 == NULL)
	{ s2 = ""; }

	s1l = 0;

	s2l = 0;

	while (s1[s1l])
	{ s1l++; }
	while (s2[s2l])
	{ s2l++; }
	if (s2l > n)
	{ s2l = n; }

	a = malloc(sizeof(char) * (s1l + 1 + s2l));

	if (a == NULL)
	{ return (NULL); }

	for (i = 0; i < s1l; i++)
	{ a[i] = s1[i]; }
	for (ii = 0; ii <= s2l; ii++)
	{
		if (n > s2l && ii <= s2l)
		{ a[ii + s1l] = s2[ii]; }
		else if (n <= s2l && ii < s2l)
		{ a[ii + s1l] = s2[ii]; }
		else
		{ a[ii + s1l] = '\0'; }
	}

	return (a);
}
