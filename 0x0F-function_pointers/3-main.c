#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - returns solution to simple equation
 * ^prints "Error\n" and exits with a specific status if:
 * the number of arguments is wrong (exit status: 98)
 * the operator isn't +, -, *, /, or % (exit status: 99)
 * one attempts to divide by 0 (exit status: 100)
 *
 * @argc: int
 * @argv: array
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int a, b, x;
	char arr[5] = {'+', '-', '*', '/', '%'};

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argv[2] != &arr[0] && argv[2] != &arr[1] && argv[2] != &arr[2] && argv[2] != &arr[3] && argv[2] != &arr[4])
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2] == &arr[3] || argv[2] == &arr[4]) && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	x = (*get_op_func(argv[2]))(a, b);

	return (x);
}
