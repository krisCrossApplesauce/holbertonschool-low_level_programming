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

	char *c = "will it return just the last char, like it should? (yes)";

	char *d;

	char *e = "";

	char *g;

	f = _strchr(s, 'l');

	b = _strchr(a, 'a');

	d = _strchr(c, ')');

	g = _strchr(e, 'f');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	printf("%s\n", b);
	printf("%s\n", d);
	printf("%s\n", g);

	return (0);
}
