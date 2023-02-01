#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: int
 *
 * Return: triangle
 */

void print_triangle(int size)
{
	int h, w;

	for (h = 0; h < size; h++)
	{
		for (w = 0; w <= size; w++)
		{
			if (w < (size - h))
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}

		if (h < (size - 1))
		{
			_putchar('\n');
		}
	}

	_putchar('\n');
}
