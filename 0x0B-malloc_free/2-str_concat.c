#include "main.h"

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
	{
		return (NULL);
	}

	s1l = 0;

	s2l = 0;

	while (s1[s1l] != '\n')
	{
		s1l++;
		al++;
	}

	while (s2[s2l] != '\n')
	{
		s2l++;
		al++;
	}

	arr = malloc(sizeof(char) * al);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1l; i++)
	{
		arr[i] = s1[i];
	}

	for (ii = 0; ii <= s2l; ii++)
	{
		arr[i + ii] = s2[ii];
	}

	return (arr);
}
