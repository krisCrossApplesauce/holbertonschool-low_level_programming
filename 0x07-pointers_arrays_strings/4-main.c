#include "main.h"
#include <stdio.h>
#include <string.h>

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
	char *ab;
	char *ba;
	char *abx;
	char *bax;
	char *e = "abcde";
	char *g = "ghijk";
	char *eg;
	char *egx;

	t = _strpbrk(s, f);

	ab = _strpbrk(a, b);
	abx = strpbrk(a, b);
	ba = _strpbrk(b, a);
	bax = strpbrk(b, a);
	eg = _strpbrk(e, g);
	egx = strpbrk(e, g);

	printf("\nasjdifuyeh\n");
	printf("%s\n%s\n\n", ab, abx);
	printf("asjdifuyeh\n\n");
	printf("%s\n%s\n\n", ba, bax);
	printf("abcde\nghijk\n");
	printf("%s\n%s\n\n", eg, egx);

	printf("%s\n", t);
	return (0);
}
