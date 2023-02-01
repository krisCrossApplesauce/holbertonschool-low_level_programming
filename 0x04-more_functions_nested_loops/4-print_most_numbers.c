#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints 0-9 except for 2 & 4
 *
 * Return: prints 0-9 except 2 & 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}

		if (i == 9)
		{
			_putchar('\n');
		}
	}
}
