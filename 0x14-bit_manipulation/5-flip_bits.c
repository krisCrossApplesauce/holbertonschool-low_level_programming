#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: unsigned long int, number
 * @m: unsigned long int, another number
 *
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, x;

	for (i = 0; i < (sizeof(n) * sizeof(unsigned int)); i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
		{ x++; }
	}

	return (x);
}
