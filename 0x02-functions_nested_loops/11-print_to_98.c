#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - counts from number to 98
 *
 * @n: number
 *
 * Return: list of numbers or nothing
 */

void print_to_98(int n)
{
	int i, x;

	x = abs(98 - n);

	for (i = 0; i <= x; i++)
	{
		int a;

		if (n == 98 || (n - i) == 98 || (n + i) == 98)
		{
			printf("98\n");
		}
		else if (n > 98)
		{
			a = n - i;
			printf("%d, ", a);
		}
		else if (n < 98)
		{
			a = n + i;
			printf("%d, ", a);
		}
	}
}
