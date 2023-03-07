#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * ^on each element of an array
 *
 * @array: int array, array of things to be put into the given function
 * @size: size_t, size of array
 * @action: function pointer, points to function to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
