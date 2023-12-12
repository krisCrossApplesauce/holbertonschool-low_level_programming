#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of ints
 * using the binary search algorithm
 *
 * @array: int *, the array being searched in
 * @size: size_t, the number of elements in array
 * @value: int, the value being searched for
 *
 * Return: int, the index where value is located (idx),
 * or -1 if value is not in array, or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int idx = (int) size, i = 0, x;

	if (array == NULL && size > 0)
	{ return (-1); }

	while (idx > 0)
	{
		printf("Searching in array: ");
		for (x = i; x < (idx - i); x++)
		{
			printf("%d", array[x]);
			if (x == (idx - i - 1))
			{ printf("\n"); }
			else
			{ printf(", "); }
		}

		i += (idx / 2);

		if (value == array[i])
		{ return (i); }
		elif (value < array[i])
		{ i -= (idx / 2); }

		idx = idx / 2;
	}

	return (-1);
}
