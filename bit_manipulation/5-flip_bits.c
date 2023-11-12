#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 *
 * @n: unsigned long int, the number to be compared to the other
 * @m: unsigned long int, the other number
 *
 * Return: unsigned int,
 * number of bits that are different between the two numbers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o = n ^ m;
	unsigned int f = 0;

	while (o > 0)
	{
		f = f + (o & 1);
		o = o >> 1;
	}

	return (f);
}
