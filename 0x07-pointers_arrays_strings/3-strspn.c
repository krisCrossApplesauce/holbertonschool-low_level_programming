#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: char array/string, what it's getting the length of
 *
 * @accept: char array/string
 * ^only counts the char of the initial segment of s included in this
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, x, isl, al;

	unsigned int n = 0;

	isl = 0;

	al = 0;

	while ((s[isl] >= 65 && s[isl] <= 90) || (s[isl] >= 97 && s[isl] <= 122))
	{
		isl++;
	}

	if (s[isl] == '\0')
	{
		isl = isl - 1;
	}

	while (accept[al] != '\0')
	{
		al++;
	}

	for (i = 0; i <= isl; i++)
	{
		for (x = 0; x <= al; x++)
		{
			if (s[i] == accept[x])
			{
				n++;
			}
		}
	}

	return (n);
}
