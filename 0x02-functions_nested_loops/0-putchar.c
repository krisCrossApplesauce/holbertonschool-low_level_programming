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

	char txt[9] = "_putchar";

	for (i = 0; i < 10; i++)
	{
		c = txt[i];
		if (i < 9)
		{
			putchar(c);
		}
		else if (i == 9)
		{
			putchar('\n');
		}
	}
	return (0);
}
