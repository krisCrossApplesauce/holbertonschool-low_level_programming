#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 *
 * @s: pointer to string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(s[0]);

	if (s[0] != '\0')
	{
		s = &s[1];
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
