#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers */

/**
 * main - void
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("$n is positive\n");
	} else if (n == 0)
	{
		printf("$n is zero\n");
	} else if (n < 0)
	{
		printf("$n is negative\n");
	}

	return (0);
}
