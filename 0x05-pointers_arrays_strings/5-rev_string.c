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
	int i, sl;

	char ch;

	char str[1] = {'\0'};

	sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i <= sl; i++)
	{
		ch = s[sl - i];
		strncat(str, &ch, 1);
		s = str;
	}
}
