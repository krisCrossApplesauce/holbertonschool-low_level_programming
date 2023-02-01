#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 0-14 ten times
 *
 * Return: prints 0-14 ten times
 */

void more_numbers(void)
{
	int t, i;

	for (t = 0; t < 10; t++)
	{
		for (i = 0; i < 15; i++)
		{
			printf("%d", i);

			if (i == 14)
			{
				printf("\n");
			}
		}
	}
}
