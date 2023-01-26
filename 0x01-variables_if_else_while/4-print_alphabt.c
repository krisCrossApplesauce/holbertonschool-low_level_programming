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

	char alph[25] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 25; i++)
	{
		c = alph[i];
		if (i < 24)
		{
			putchar(c);
		}
		else if (i == 24)
		{
			putchar('\n');
		}
	}
	return (0);
}
