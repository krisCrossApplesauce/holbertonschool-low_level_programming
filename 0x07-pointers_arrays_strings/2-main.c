#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *s = "hello";
	
	char *f;

	char *a = "this should return null";

	char *b;

	f = _strchr(s, 'l');

	b = _strchr(a, 'a');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	printf("%s\n", b);

	return (0);
}
