#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - void
 *
 * Return: whatever
 */

void print_alphabet_x10(void)
{
	char c;

	int i, t;

	char alph[27] = "abcdefghijklmnopqrstuvwxyz";

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 27; i++)
		{
			c = alph[i];
			if (i < 26)
			{
				_putchar(c);
			}
			else if (i == 26)
			{
				_putchar('\n');
			}
		}
	}
}
