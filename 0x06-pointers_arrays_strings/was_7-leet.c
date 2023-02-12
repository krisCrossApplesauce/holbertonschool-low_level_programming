#include <stdio.h>
/* #include "holberton.h" */

/**
 * was_leet - encodes a string into 1337
 * ^replacing:
 * A & a with 4
 * E & e with 3
 * L & l with 1
 * O & o with 0
 * and
 * T & t with 7
 *
 *
 * @s: char array/string
 *
 * Return: pointer
 */

char *was_leet(char *s)
{
	int i, sl;

	sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i < sl; i++)
	{
		if (s[i] == 65 || s[i] == 97)
		{
			s[i] = 52;
		}
		else if (s[i] == 69 || s[i] == 101)
		{
			s[i] = 51;
		}
		else if (s[i] == 79 || s[i] == 111)
		{
			s[i] = 48;
		}
		else if (s[i] == 84 || s[i] == 116)
		{
			s[i] = 55;
		}
		else if (s[i] == 76 || s[i] == 108)
		{
			s[i] = 49;
		}
	}

	return (s);
}
