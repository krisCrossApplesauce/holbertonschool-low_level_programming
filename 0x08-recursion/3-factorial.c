#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * ^(the product of an int and all ints below it)
 *
 * @n: int
 *
 * Return: int
 */

int factorial(int n)
{
	int i;

	if (n < 0)
	{
		i = -1;
	}
	else if (n > 0)
	{
		i = n * factorial(n - 1);
	}
	else if (n == 0)
	{
		i = 1;
	}

	return (i);
}
