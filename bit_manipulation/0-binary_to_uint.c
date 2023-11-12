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
	int i = 0;
	unsigned int n = 0;

	if (b == NULL)
	{ return (0); }

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{ return (0); }

		if (b[i] == '1' && n == 0)
		{ n = 1; }
		else
		{
			n = n * 2;
			if (b[i] == '1')
			{ n = n + 1; }
		}

		i++;
	}

	return (n);
}
