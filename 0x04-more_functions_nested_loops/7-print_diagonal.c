#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - creates a diagonal line n chars long
 *
 * @n: int
 *
 * Return: it's complicated
 */

void print_diagonal(int n)
{
	int t, i;

	for (t = 0; t < n; t++)
	{
		for (i = 0; i < t; i++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		if (t < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
