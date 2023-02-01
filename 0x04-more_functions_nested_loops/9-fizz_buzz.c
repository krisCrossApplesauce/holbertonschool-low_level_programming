#include <stdio.h>

/**
 * main - prints numbers 1-100, except:
 * multiples of 3 print Fizz
 * multiples of 5 print Buzz
 * multiples of both print FizzBuzz
 *
 * Return: 1-100 w/ mult of 3 Fizz, mult of 5 Buzz, mult of both FizzBuzz
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (!(i % 15))
		{
			printf("FizzBuzz");
		}
		else if (!(i % 5))
		{
			printf("Buzz");
		}
		else if (!(i % 3))
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
