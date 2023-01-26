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

	char hex[17] = "0123456789abcdef";

	for (i = 0; i < 17; i++)
	{
		c = hex[i];
		if (i < 16)
		{
			putchar(c);
		}
		else if (i == 16)
		{
			putchar('\n');
		}
	}
	return (0);
}
