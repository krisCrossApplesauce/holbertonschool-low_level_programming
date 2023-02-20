#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: int
 *
 * @argv: array
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
