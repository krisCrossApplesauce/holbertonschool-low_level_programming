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
	int s = (int) (size - 1), idx = 0, i;
	int x = 0, y = 0, a, b;

	if (array == NULL && size > 0)
	{ return (-1); }

	while (s > 0 && idx < (int) size)
	{
		if (x == 0)
		{
			a = (s - idx - y);
			b = idx;
		}
		else
		{
			a = (s + idx + y);
			b = idx + 1;
		}

		printf("Searching in array: ");
		for (i = b; i <= a; i++)
		{
			printf("%d", array[i]);
			if (i == a)
			{ printf("\n"); }
			else
			{ printf(", "); }
		}

		idx += (s / 2);

		if (value == array[idx])
		{ return (idx); }
		else if (value < array[idx])
		{
			idx -= (s / 2);
			x = 0;
		}
		else
		{ x = 1; }

		if (s - (s / 2) == (s / 2) + 1)
		{ y = 1; }
		else
		{ y = 0; }

		s = (s / 2);
	}

	return (-1);
}
