#include <stdio.h>

/**
 * _islower - int
 *
 * @c: is a character, translated into an int using its ASCII value
 * ^that's why c is compared to numbers in if statement, comparing the ASCII values
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
