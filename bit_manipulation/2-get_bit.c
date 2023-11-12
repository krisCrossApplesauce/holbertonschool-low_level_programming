#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: unsigned long int, a decimal number
 * @index: unsigned int, the index of the bit to be returned
 *
 * Return: int, the value of the bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * sizeof(unsigned long int)))
	{ return (-1); }

	return ((n >> index) & 1);
}
