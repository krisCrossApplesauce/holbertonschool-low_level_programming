#include "main.h"

/**
 * binary_to_uint - converts a binary number into an unsigned int
 *
 * @b: const char *, the binary number that is to be converted
 *
 * Return: unsigned int, the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i, ii, sl = 0;
	unsigned int x = 1, y, n = 0;

	if (b == NULL)
	{ return (0); }

	while (b[sl] != '\0')
	{ sl++; }

	sl--;

	for (i = 0; i <= sl; i++)
	{
		for (ii = 0; ii < (sl - i); ii++)
		{ x = x * 2; }

		if (b[i] == '0')
		{ y = 0; }
		else if (b[i] == '1')
		{ y = 1; }
		else
		{ return (0); }

		n = n + (x * y);

		x = 1;
	}

	return (n);
}
