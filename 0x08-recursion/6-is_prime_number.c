#include <stdio.h>
#include "main.h"

/**
 * check_prime - checks if n is prime
 *
 * @i: int, the number we're checking if n is divisible by
 *
 * @n: int, the number we're finding if prime or not
 *
 * Return: int, 1 if n is prime, 0 if not
 */

int check_prime(int i, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (i == n)
	{
		return (1);
	}
	else if (n % i != 0)
	{
		return (check_prime(i + 1, n));
	}
	else
	{
		return (0);
	}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * ^otherwise returns 0
 *
 * @n: int
 *
 * Return: int, 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	return (check_prime(2, n));
}
