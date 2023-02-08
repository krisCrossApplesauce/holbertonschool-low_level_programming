#include <stdio.h>
#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: char array/string
 *
 * Return: pointer
 */

char *cap_string(char *s)
{
	int i, nw, sl;

	nw = 0;

	sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i < sl; i++)
	{
		if (s[i] == 9 || s[i] == 10 || s[i] == 32)
		{
			nw = 1;
		}
		else if (s[i] == 33 || s[i] == 46 || s[i] == 63)
		{
			nw = 1;
		}
		else
		{
			if ((nw == 1 || i == 0) && s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}

			nw = 0;
		}
	}

	return (s);
}
