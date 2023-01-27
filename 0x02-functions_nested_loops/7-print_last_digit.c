#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - does something, that's for sure
 *
 * @n: number
 * ^idc if you say it isnt there, it is
 *
 * Return: stuff
 */

int print_last_digit(int n)
{
	int last;

	if ((n % 10) == 0)
	{
		last = 0;
		_putchar(last);
	}
	else if (n < 0)
	{
		last = (n * -1) % 10;
		_putchar(last);
	}
	else
	{
		last = n % 10;
		_putchar(last);
	}

	return(0);
}
