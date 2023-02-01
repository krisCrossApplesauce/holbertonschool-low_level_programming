#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square i guess
 *
 * @size: int
 *
 * Return: square with size by size dimensions
 */

void print_square(int size)
{
	int w, h;

	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}

		if (h < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
