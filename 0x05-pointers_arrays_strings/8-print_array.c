#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n number of elements from array
 * ^separated by comma and space, in order, followed by new line
 *
 * @a: int array
 *
 * @n: int
 *
 * Return: list of ints
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
}
