#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number
 *
 * Return: unsigned int, b converted to decimal (a = answer), unless:
 * there is one or more chars in the string b that is not 0 or 1
 * or b is NULL
 * in which case, return 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, ii, sl = 0;
	unsigned int x = 1, y, a = 0;

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

		a = a + (x * y);

		x = 1;
	}

	return (a);
}
