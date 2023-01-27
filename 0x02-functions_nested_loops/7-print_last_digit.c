#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * print_last_digit - does something, that's for sure
 *
 * @n: number
 * ^idc if you say it isnt there, it is
 *
 * Return: i dont have to return anything
 */

int print_last_digit(int n)
{
	int last;

	if (n == INT_MIN)
	{
		last = 8;
	}
	else if (n < 0)
	{
		last = (n * -1) % 10;
	}
	else
	{
		last = n % 10;
	}

	printf("%d%d", last, last);
	return (last);
}
