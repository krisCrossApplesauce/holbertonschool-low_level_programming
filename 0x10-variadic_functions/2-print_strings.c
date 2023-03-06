#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *arr;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(ap, char *);

		if (arr == 0)
		{ printf("(nil)"); }
		else
		{ printf("%s", arr); }

		if (i < (n - 1) && separator != NULL)
		{ printf("%s", separator); }
		else if (i == (n - 1))
		{ printf("\n"); }
	}

	va_end(ap);
}
