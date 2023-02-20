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
		int a = *argv[1] - 48;

		int b = *argv[2] - 48;
		
		printf("%d\n", a * b);
		return (0);
	}
}
