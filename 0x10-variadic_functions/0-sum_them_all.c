#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: unsigned int, number of parameters
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int x = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = x + va_arg(ap, int);
	}

	va_end(ap);

	return (x);
}
