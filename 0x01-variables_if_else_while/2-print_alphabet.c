#include <stdio.h>

/**
 * main - void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	int i;

	char alph[27] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 27; i++)
	{
		c = alph[i];
		putchar(c);
	}
	return (0);
}
