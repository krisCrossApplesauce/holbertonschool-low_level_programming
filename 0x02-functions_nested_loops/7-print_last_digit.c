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

	if (_abs((n % 10 )) != 1 && (n % 10) != 2 && (n % 10) != 3 && (n % 10) != 4 && (n % 10) != 5
			&& (n % 10) != 6 && (n % 10) != 7 && (n % 10) != 8 && (n % 10) != 9)
	{
		last = 0;
	}
	else if (n < 0)
	{
		last = (n * -1) % 10;
	}
	else
	{
		last = n % 10;
	}

	return (last);
}
