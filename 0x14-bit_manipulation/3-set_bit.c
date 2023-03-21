#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: unsigned long int *, number
 * @index: unsigned int, where bit is to be changed
 *
 * Return: int, 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * sizeof(unsigned int)))
	{ return (-1); }

	*n = *n | (1 << index);
	return (1);
}
