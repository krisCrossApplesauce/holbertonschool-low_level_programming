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
	int i, s1l, s2l;

	char *arr;

	s1l = 0;

	s2l = 0;

	while (s1[s1l] != '\n')
	{
		s1l++;
	}

	while (s2[s2l] != '\n')
	{
		s2l++;
	}

	arr = (char *) malloc(s1l + s2l - 1);

	for (i = 0; i < (s1l + s2l - 1); i++)
	{
		if (i < s1l)
		{
			arr[i] = s1[i];
		}
		else if (i >= s1l)
		{
			arr[i] = s2[i - s1l];
		}
	}

	return (arr);
}
