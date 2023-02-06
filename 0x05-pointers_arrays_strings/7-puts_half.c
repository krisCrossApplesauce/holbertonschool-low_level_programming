#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints the first half of a string, ending with new line
 *
 * @str: char array/str
 *
 * Return: string
 */

void puts_half(char *str)
{
	int i, sl;

	sl = 0;

	while (str[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i < sl; i++)
	{
		if (!(sl % 2))
		{
			if (i >= (sl / 2))
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i > (sl / 2))
			{
				_putchar(str[i]);
			}
		}
	}

	_putchar('\n');
}
