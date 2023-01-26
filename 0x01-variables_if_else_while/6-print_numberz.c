#include <stdio.h>

/**
 * main - void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;

	int i;

	int dec[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 11; i++)
	{
		d = dec[i];
		if (i < 10)
		{
			putchar(d);
		}
		else if (i == 10)
		{
			putchar('\n');
		}
	}
	return (0);
}
