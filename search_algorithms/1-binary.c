#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of ints
 * using the binary search algorithm
 *
 * @array: int *, the array being searched through
 * @size: size_t, the number of elements array
 * @value: int, the value being searched for
 *
 * Return: int, the index of the value in the array (idx),
 * -1 if value isn't in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int max = (int) (size - 1), min = 0;
	int idx = 0, i;

	if (array == NULL && size > 0)
	{ return (-1); }

	while (min <= max)
	{
		idx = (min + max) / 2;

		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i == max)
			{ printf("\n"); }
			else
			{ printf(", "); }
		}

		if (value == array[idx])
		{ return (idx); }
		else if (value < array[idx])
		{ max = idx - 1; }
		else if (value > array[idx])
		{ min = idx + 1; }
	}

	return (-1);
}
