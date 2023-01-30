#include <stdio.h>
#include <limits.h>
#include "main.h"

/**
 * print_last_digit - does something, that's for sure
 *
 * @n: number
 * ^idc if you say it isnt there, it is
 *
 * Return: that was so unclear
 * ^also how was I to figure out that putting
 * var + '0'
 * in _putchar makes the var a char
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (n < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');
	return (last);
}
