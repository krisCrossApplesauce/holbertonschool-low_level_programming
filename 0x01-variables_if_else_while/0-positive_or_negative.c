#include <stdio.h>
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
		printf "%s\n" "$n is positive\n";
	} else if (n == 0)
	{
		printf "%s\n" "$n is zero\n";
	} else if (n < 0)
	{
		printf "%s\n" "$n is negative\n";
	}

	return (0);
}
