#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a str with a new line, but sdrawkcab
 *
 * @s: char array/str
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, sl;

	sl = 0;

	while (s[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i <= sl; i++)
	{
		_putchar(s[sl - i]);
	}

	_putchar('\n');
}
