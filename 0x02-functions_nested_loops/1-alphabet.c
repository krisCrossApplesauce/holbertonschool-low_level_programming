#include <stdio.h>

/**
 * print_alphabet - void
 *
 * Return: whatever
 */

void print_alphabet(void)
{
	char c;

	int i;

	char alph[27] = "abcdefghijklmnopqrstuvwxyz";

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
