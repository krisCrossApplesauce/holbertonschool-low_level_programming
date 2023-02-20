#include <stdio.h>
#include <stdlib.h>
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
	int i, n, x;

	n = 0;

	x = 0;

	for (i = 1; i < argc && x == 0; i++)
	{
		if (!(*argv[i] >= 48 && *argv[i] <= 57))
		{
			x++;
		}
		else if (!(atoi(argv[i]) < 0))
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
