#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at the given index
 *
 * @n: unsigned long int *, pointer to the number
 * @index: unsigned int, the bit to be set to 0
 *
 * Return: int, 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * sizeof(unsigned long int)))
	{ return (-1); }

	*n = *n & ~(1 << index);

	return (1);
}
