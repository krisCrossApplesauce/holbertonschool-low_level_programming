#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of ints
 * using the linear search algorithm
 *
 * @array: int *, pointer to the first element in the array to search in
 * @size: size_t, the number of elements in array
 * @value: int, the value to search for
 *
 * Return: int, the index where the first instance of value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t s = 0;
	int i = 0;

	(void)size;

	if (array == NULL)
	{ return (-1); }

	while (array[i] && s < size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{ return (i); }

		i++;
		s++;
	}

	return (-1);
}
