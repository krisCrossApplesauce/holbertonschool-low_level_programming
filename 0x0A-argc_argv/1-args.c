#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: int
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);

	if (argc == -1)
	{
		printf("%s\n", argv[argc]);
	}
}
