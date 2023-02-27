#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string
 *
 * @s2: string
 *
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int i, ii, s1l, s2l, al;

	char *arr;

	if (s1 == NULL && s2 == NULL)
	{ return (NULL); }
	if (s1 == NULL)
	{ s1 = ""; }
	if (s2 == NULL)
	{ s2 = ""; }

	s1l = 0;

	s2l = 0;

	al = 0;

	while (s1[s1l] != '\0')
	{
		s1l++;
		al++;
	}

	while (s2[s2l] != '\0')
	{
		s2l++;
		al++;
	}

	arr = malloc(sizeof(char) * (s1l + s2l + 1));

	if (arr == NULL)
	{ return (NULL); }
	for (i = 0; i < s1l; i++)
	{ arr[i] = s1[i]; }
	for (ii = 0; ii <= s2l; ii++)
	{ arr[i + ii] = s2[ii]; }
	return (arr);
}
