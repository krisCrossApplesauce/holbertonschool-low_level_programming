#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a str with a new line to stdout
 *
 * @str: char array/str
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
