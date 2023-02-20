#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: int
 *
 * @argv: array
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (*argv[1] >= 48 && *argv[1] <= 57 && *argv[2] >= 48 && *argv[2] <= 57)
		{
			int a = atoi(argv[1]);

			int b = atoi(argv[2]);

			printf("%d\n", a * b);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
}
