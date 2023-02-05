#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns length of string
 *
 * @s: char array/str
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
