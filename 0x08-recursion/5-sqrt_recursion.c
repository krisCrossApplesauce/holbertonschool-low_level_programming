#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
 */

int _check_recursion(int i, int n)
{
	if ((i == n && n != 0 && n != 1) || n < 0)
	{
		return (-1);
	}
	else if (i * i != n)
	{
		return(_check_recursion(i + 1, n));
	}
	else
	{
		return (i);
	}
}

int _sqrt_recursion(int n)
{
	return (_check_recursion(0, n));
}
