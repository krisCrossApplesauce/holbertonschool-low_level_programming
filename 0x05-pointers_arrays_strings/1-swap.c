#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of 2 ints
 *
 * @a: int
 *
 * @b: int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
