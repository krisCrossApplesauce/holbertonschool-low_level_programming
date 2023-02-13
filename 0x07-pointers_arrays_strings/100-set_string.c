#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to a pointer
 * ^the pointer of which the value is being set
 *
 * @to: char pointer
 * ^points to the char that the value of s is being set to
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
