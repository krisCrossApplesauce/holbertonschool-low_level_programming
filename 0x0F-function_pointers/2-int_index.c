#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: int array
 * ^array of ints where specific int(s) is/are being searched
 * @size: int, number of elements in array
 * @cmp: function pointer, points to function used to compare values
 *
 * Return: the index of the first element
 * for which the cmp function does not return 0
 * ^if no element matches, return -1
 * ^if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{ return (-1); }

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
