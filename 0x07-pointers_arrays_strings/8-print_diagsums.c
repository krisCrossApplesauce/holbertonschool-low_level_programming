#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 *
 * @a: array array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, d, u;

	d = 0;

	u = 0;

	for (i = 0; i < size; i++)
	{
		d = d + a[i + (size * i)];
		u = u + a[size - i - 1 + (size * i)];
	}

	printf("%d, %d\n", d, u);
}
