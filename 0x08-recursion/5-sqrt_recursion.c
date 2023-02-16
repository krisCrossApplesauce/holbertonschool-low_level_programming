#include <stdio.h>
#include "main.h"

/**
 * _checker_recursion - finds and returns the natural square root of a number
 *
 * @i: int, the number being checked if sqrt of n
 *
 * @n: int, the number that we're finding the sqrt of
 *
 * Return: int
 */

int _checker_recursion(int i, int n)
{
	if ((i == n && n != 0 && n != 1) || n < 0)
	{
		return (-1);
	}
	else if (i * i != n)
	{
		return(_checker_recursion(i + 1, n));
	}
	else
	{
		return (i);
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int, the number we're finding the sqrt of
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_checker_recursion(0, n));
}
