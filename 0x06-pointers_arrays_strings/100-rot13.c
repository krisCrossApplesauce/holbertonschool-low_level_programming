#include <stdio.h>
#include "holberton.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: char array/str
 *
 * Return: pointer
 */

char *rot13(char *s)
{
	int i, x;

	char *a = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";

	char *r = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; s[i]; i++)
	{
		for (x = 0; x < 52; x++)
		{
			if (s[i] == a[x])
			{
				s[i] = r[x];
			}
		}
	}

	return (s);
}
