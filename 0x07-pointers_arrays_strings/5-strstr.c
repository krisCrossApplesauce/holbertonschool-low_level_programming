#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * 
 * @haystack: string, where looking for substring
 * 
 * @needle: substring, what's being looked for
 *
 * Return: pointer, beginning of substring in sting
 * ^or NULL if not found
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, x, hl, nl;

	x = 0;
	hl = 0;
	nl = 0;
	while (haystack[hl] != '\0')
	{
		hl++;
	}
	while (needle[nl] != '\0')
	{
		nl++;
	}
	for (a = 0; a <= hl && x == 0; a++)
	{
		if (nl == 0)
		{
			x++;
		}
		if (haystack[a] == needle[0])
		{
			x = 1;
			for (b = 1; b < nl; b++)
			{
				if (haystack[a + b] == needle[b])
				{
					x++;
				}
			}
			if (x == nl)
			{
				haystack = &haystack[a];
			}
			else
			{
				x = 0;
			}
		}
		if (a == hl)
		{
			haystack = &haystack[hl];
		}
	}
	return (haystack);
}
