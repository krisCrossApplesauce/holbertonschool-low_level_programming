#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argc: int
 *
 * @argv: array
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int i, ii, n, x;

	n = 0;

	x = 0;

	for (i = 1; i < argc && x == 0; i++)
	{
		for (ii = 0; argv[i][ii] && x == 0; ii++)
		{
			if (!(argv[i][ii] >= 48 && argv[i][ii] <= 57))
			{
				x++;
			}
		}

		if (!(atoi(argv[i]) < 0))
		{
			n = n + atoi(argv[i]);
		}
	}

	if (x != 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", n);
		return (n);
	}
}
