#include <stdio.h>

/**
 * main - void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		if (i < '9')
		{
			putchar(i);
			putchar(',');
		}
		else if (i == '9')
		{
			putchar(i);
			putchar('\n');
		}
	}
	return (0);
}
