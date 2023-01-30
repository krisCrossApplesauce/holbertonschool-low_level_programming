#include <stdio.h>
#include "main.h"

/**
 * times_table - prints multiplication table (0-9x0-9)
 *
 * Return: void
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = a * b;

			if (b == 9)
			{
				if (c < 10)
				{
					printf("  %d", c);
				}
				else
				{
					printf(" %d", c);
				}
			}
			else
			{
				if (c < 10)
				{
					printf("  %d,", c);
				}
				else
				{
					printf(" %d,", c);
				}
			}
		}

		printf("\n");
	}
}
