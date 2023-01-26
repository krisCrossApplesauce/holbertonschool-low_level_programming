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
		if (i < 26)
		{
			putchar(c);
		}
		else if (i == 26)
		{
			putchar('\n');
		}
	}
	return (0);
}
