#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: int
 * ^number that the numbers in the array will start counting from
 *
 * @max: int
 * ^number that the numbers in the array will count up to
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int i;

	int *a;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(sizeof(int) * (max - min + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		a[i] = min;
		min++;
	}

	return (a);
}
