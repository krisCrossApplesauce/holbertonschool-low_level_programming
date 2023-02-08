#include <stdio.h>
#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @s: char array/string
 *
 * Return: pointer
 */

char *string_toupper(char *s)
{
	int i, sl;

	sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i < sl; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}

	return (s);
}
