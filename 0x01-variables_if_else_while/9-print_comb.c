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

	char dig[11] = "0123456789";

	for (i = 0; i < 11; i++)
	{
		c = dig[i];
		if (i < 9)
		{
			putchar(c);
			putchar(',');
		}
		else if (i == 9)
		{
			putchar(c);
		}
		else if (i == 10)
		{
			putchar('\n');
		}
	}
	return (0);
}
