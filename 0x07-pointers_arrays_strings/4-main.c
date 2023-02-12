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
	char *h = "first instance is at end";
	char *i = "dquwxyz";
	char *hi;
	char *hix;

	t = _strpbrk(s, f);

	ab = _strpbrk(a, b);
	abx = strpbrk(a, b);
	ba = _strpbrk(b, a);
	bax = strpbrk(b, a);
	eg = _strpbrk(e, g);
	egx = strpbrk(e, g);
	hi = _strpbrk(h, i);
	hix = strpbrk(h, i);

	printf("\nasjdifuyeh\n");
	printf("%s\n%s\n\n", ab, abx);
	printf("asjdifuyeh\n\n");
	printf("%s\n%s\n\n", ba, bax);
	printf("abcde\nghijk\n");
	printf("%s\n%s\n\n", eg, egx);
	printf("first instance is at end\ndquwxyz\n");
	printf("%s\n%s\n\n", hi, hix);

	printf("%s\n", t);
	return (0);
}
