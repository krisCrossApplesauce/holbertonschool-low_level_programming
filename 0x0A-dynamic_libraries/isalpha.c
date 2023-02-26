#include <stdio.h>

/**
 * _isalpha - int
 *
 * @c: is a character, translated into an int using its ASCII value
 * ^that's why c is compared to numbers in if statement
 * ^^comparing the ASCII values
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
