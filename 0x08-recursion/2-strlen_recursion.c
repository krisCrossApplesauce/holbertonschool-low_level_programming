#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[0] != '\0')
	{
		i = i + 1 + _strlen_recursion(&s[1]);
	}

	return (i);
}
