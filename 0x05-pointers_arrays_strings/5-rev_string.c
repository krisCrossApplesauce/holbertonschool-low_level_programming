#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: char array/str
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;

	int sl = 0;

	char str;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = sl - 1; i >= sl / 2; i--)
	{
		str = s[i];
		s[i] = s[sl - i - 1];
		s[sl - i - 1] = str;
/**
 * first loop, swaps the outer characters
 * swaps next characters inward every loop
 * stops at half way (i >= sl / 2) so doesnt undo swapping
 * - 1 for i = sl - 1 so doesnt include /0
 */
	}
}
