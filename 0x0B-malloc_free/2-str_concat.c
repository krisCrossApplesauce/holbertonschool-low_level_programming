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
	int i, s1l, s2l, al;

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

	al = s1l + s2l - 1;

	arr = (char *) malloc(al);

	for (i = 0; i < al; i++)
	{
		if (i < (s1l - 2))
		{
			arr[i] = s1[i];
		}
		else
		{
			arr[i] = s2[i - s1l + 2];
		}
	}

	return (arr);
}
