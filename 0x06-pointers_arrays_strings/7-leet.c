#include <stdio.h>
#include "holberton.h"

/**
 * leet - encodes a string into 1337
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

char *leet(char *s)
{
	int i, x;

	char *a = "AaEeLlOoTt";

	char *n = "4433110077";

	for (i = 0; s[i]; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (s[i] == a[x])
			{
				s[i] = n[x];
			}
		}
	}

	return (s);
}
