#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: pointer to string
 *
 * @s2: pointer to string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, s1l, s2l, x;

	s1l = 0;

	s2l = 0;

	x = 0;

	while (s1[s1l] != '\0')
	{
		s1l++;
	}

	while (s2[s2l] != '\0')
	{
		s2l++;
	}

	for (i = 0; i < s1l && i < s2l && x == 0; i++)
	{
		x = s1[i] - s2[i];
	}

	return (x);
}
