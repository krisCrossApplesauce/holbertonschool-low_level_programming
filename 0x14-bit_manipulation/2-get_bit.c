#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: unsigned long int, number
 * @index: unsigned int
 *
 * Return: the value of the bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* A BIT IS A DIGIT IN BINARY */
	/* THEY BYTE SIZE OF AN OBJECT IS HOW MANY DIGITS OF BINARY IT TAKES */
	if (index > (sizeof(n) * sizeof(unsigned long int)))
	{ return (-1); }

	return ((n >> index) & 1);
}
