#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line n char long
 *
 * @n: int
 *
 * Return: line n char long
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
}
