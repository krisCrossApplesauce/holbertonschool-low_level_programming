#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: char array/string, where locating character
 *
 * @c: char, the character to be located
 *
 * Return: pointer, to the first occurrence of c in s
 * ^if s does not contain c, points to NULL
 */

char *_strchr(char *s, char c)
{
	int i, x, sl;

	char *p;

	x = 0;

	sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i <= sl; i++)
	{
		if (i < sl && s[i] == c && x == 0)
		{
			p = &s[i];
			x++;
		}
		else if (i == sl && x == 0)
		{
			p = &s[sl - 1];
		}
	}

	return (p);
}
