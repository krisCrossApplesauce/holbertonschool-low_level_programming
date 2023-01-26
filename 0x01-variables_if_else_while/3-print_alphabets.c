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

	char ALPH[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 54; i++)
	{
		c = alph[i];
		if (i < 26)
		{
			putchar(c);
		}
		else if (i >= 26 && i < 53)
		{
			for (i = 27; i < 53; i++)
			{
				c = ALPH[i - 27];
				putchar(c);
			}
		}
		else if (i == 53)
		{
			putchar('\n');
		}
	}
	return (0);
}
