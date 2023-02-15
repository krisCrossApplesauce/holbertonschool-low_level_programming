#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: int, number
 *
 * @y: int, power
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y < 0)
	{
		i = -1;
	}
	else if (y == 0)
	{
		i = 1;
	}
	else if (y > 0)
	{
		i = x * _pow_recursion(x, y - 1);
	}

	return (i);
}
