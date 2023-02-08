#include <stdio.h>
#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: int array
 *
 * @n: int, number of elements in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = x;
	}
}
