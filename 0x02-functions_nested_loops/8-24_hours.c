#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - stuff
 *
 * Return: times or nothing
 */

void jack_bauer(void)
{
	int m, h;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			if (h < 10)
			{
				printf("0%d:", h);
			}
			else
			{
				printf("%d:", h);
			}

			if (m < 10)
			{
				printf("0%d\n", m);
			}
			else
			{
				printf("%d\n", m);
			}
		}
	}
}
