#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * ^(aka locates a character in a string)
 *
 * @s: char array/string, where locating character
 *
 * @accept: char array/string, the chars to be located
 *
 * Return: pointer, to the first occurrence of any char in array to s
 * ^if s does not contain any chars from array, points to NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, a, x, sl, al;

	a = 0;

	x = 0;

	sl = 0;

	al = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	while (accept[al] != '\0')
	{
		al++;
	}

	for (i = 0; i <= sl; i++)
	{
		for (a = 0; a < al; a++)
		{
			if (s[i] == accept[a] && x == 0)
			{
				s = &s[i];
				x++;
			}
		}

		if (i == sl && x == 0)
		{
			s = '\0';
		}
	}

	return (s);
}
