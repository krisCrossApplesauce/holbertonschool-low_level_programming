#include "main.h"

/**
 * create_array - creates an array of chars
 * ^and initializes it with a specific char
 *
 * @size: unsigned int, num of chars
 *
 * @c: char, initializing char (the char it starts with)
 *
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a;

	a = (char *) malloc(size);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}

	if (size == 0)
	{
		return (NULL);
	}
	else if (malloc(size) == NULL)
	{
		return (NULL);
	}
	else
	{
		return (a);
	}
}
