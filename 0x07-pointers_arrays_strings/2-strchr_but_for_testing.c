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

	x = 0;

	sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i <= sl; i++)
	{
		if (s[i] == c && x == 0)
		{
			s = &s[i];
			printf("it found the char it was looking for\n");
			x++;
		}
		else if (i == sl && x == 0)
		{
			s = &s[sl];
			printf("it did not find the char it was looking for (like those guards who were looking for those droids)\n");
		}
	}

	return (s);
}
