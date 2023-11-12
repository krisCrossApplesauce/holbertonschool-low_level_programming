#include "main.h"

/**
 * binary_arr - turns a decimal number into a binary string
 *
 * @n: unsigned long int, the number to be converted into binary
 *
 * Return: unsigned int, the length of the binary number string
 */
unsigned int binary_arr(unsigned long int n, char *bi_num)
{
	unsigned int i = 0;
	char ch;

	if (bi_num == NULL)
	{ return (0); }

	if (n > 1)
	{ i = binary_arr(n >> 1, bi_num); }

	i++;
	ch = (n & 1) + '0';

	strncat(bi_num, &ch, 1);

	return (i);
}


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
	unsigned int i;
	char *bi_num = "";

	i = binary_arr(n, bi_num);

	if (i < index)
	{ return (-1); }

	if (!(bi_num[index]))
	{ return (-1); }

	return (bi_num[index] - 48);
}
