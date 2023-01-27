#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * print_last_digit - does something, that's for sure
 *
 * @n: number
 * ^idc if you say it isnt there, it is
 *
 * Return: ugg, this is my issue
 */

int print_last_digit(int n)
{
	int last;

	if (n == INT_MIN)
	{
		last = 8;
		/* printf("%d%d\n", last, last); */
	}
	else if (n < 0)
	{
		last = (n * -1) % 10;
		/* printf("%d%d\n", last, last); */
	}
	else if (n == 0)
	{
		last = 0;
	}
	else
	{
		last = n % 10;
		/* printf("%d%d\n", last, last); */
	}

	return (last);
}
