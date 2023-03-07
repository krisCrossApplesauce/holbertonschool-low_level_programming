#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 * ^c -> char, i -> int, f -> float, s -> char *
 * ^any char that is not c, i, f, or s (as listed above), is ignored
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
/*	char *type[4] = {"char", "int", "float", "char *"}; */
	char lett[4] = {'c', 'i', 'f', 's'};
	int i = 0, ii = 0;

	va_start(ap, format);

	i = 0;

	while (format[i])
	{
		ii = 0;

		while (lett[ii])
		{
			if (format[i] == lett[ii])
			{
				printf("%s, ", va_arg(ap, char *));
			}
			ii++;
		}

		i++;
	}

	printf("\n");

	va_end(ap);
}
