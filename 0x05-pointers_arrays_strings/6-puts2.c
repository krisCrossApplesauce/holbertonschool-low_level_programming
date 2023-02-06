#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other char of a str
 * ^starting with first char and ending with new line
 *
 * @str: char array/str
 *
 * Returns: string
 */

void puts2(char *str)
{
	int i, sl;

	sl = 0;

	while (str[sl] != '\0')
	{
		sl++;
	}

	for (i = 0; i < sl; i++)
	{
		if (!(i % 2))
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
