#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	char *a = "";
	char *b = "asjdifuyeh";
	char *c;
	char *d;
	char *e = "abcde";
	char *g = "ghijk";
	char *h;

	t = _strpbrk(s, f);

	c = _strpbrk(a, b);
	d = _strpbrk(b, a);
	h = _strpbrk(e, g);

	printf("%s\n", c);
	printf("%s\n", d);
	printf("%s\n", h);

	printf("%s\n", t);
	return (0);
}
