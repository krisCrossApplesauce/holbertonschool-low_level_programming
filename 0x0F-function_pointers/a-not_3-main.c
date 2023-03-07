#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	char *arr[5] = {"+", "-", "*", "/", "%"};
	char *op;

	if (argc != 4)
	{
		printf("Error 1\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (op != arr[0] && op != arr[1] && op != arr[2] && op != arr[3] && op != arr[4])
	{
		printf("Error 2\n");
		exit(99);
	}

	if ((op == arr[3] || op == arr[4]) && b == 0)
	{
		printf("Error 3\n");
		exit(100);
	}

	x = (*get_op_func(op))(a, b);

	printf("%d\n", x);
	return (x);
}
