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
	char *s = "hello";
	char *f;
	char *fx;

	char *a = "this should return null";
	char *aa;
	char *aax;
	char *b = "will it return just the last char, like it should? (yes)";
	char *bb;
	char *bbx;
	char *c = "";
	char *cc;
	char *ccx;
	char *d = "128932127238732";
	char *dd;
	char *ddx;
	char *e = "1287230898434";
	char *ee;
	char *eex;
	char *g = "this should return null, Xbut because that's the char it's looking forX, that is no longer the case, it will return NULL bc will not find NULL";
	char *gg;
	char *ggx;
	char *h = "surely it differentiates between upper and lower case";
	char *hh;
	char *hhx;
	char *i = "what if looking for spaces?";
	char *ii;
	char *iix;

	printf("f: ");
	f = _strchr(s, 'l');
	fx = strchr(s, 'l');

	printf("  a: ");
	aa = _strchr(a, 'a');
	aax = strchr(a, 'a');

	printf("  b: ");
	bb = _strchr(b, ')');
	bbx = strchr(b, ')');

	printf("  c: ");
	cc = _strchr(c, 'c');
	ccx = strchr(c, 'c');

	printf("  d: ");
	dd = _strchr(d, '0');
	ddx = strchr(d, '0');

	printf("  e: ");
	ee = _strchr(e, '0');
	eex = strchr(e, '0');

	printf("  g: ");
	gg = _strchr(g, '\0');
	ggx = strchr(g, '\0');

	printf("  h: ");
	hh = _strchr(h, 'U');
	hhx = strchr(h, 'U');

	printf("  i: ");
	ii = _strchr(i, ' ');
	iix = strchr(i, ' ');

	printf("\nhello\nl\n");
	printf("%s\n", f);
	printf("%s\n\n", fx);

	printf("this should return null\na\n");
	printf("%s\n", aa);
	printf("%s\n\n", aax);
	printf("will it return just the last char, like it should? (yes)\n)\n");
	printf("%s\n", bb);
	printf("%s\n\n", bbx);
	printf("[nothing]\nc\n");
	printf("%s\n", cc);
	printf("%s\n\n", ccx);
	printf("128932127238732\n0\n");
	printf("%s\n", dd);
	printf("%s\n\n", ddx);
	printf("1287230898434\n0\n");
	printf("%s\n", ee);
	printf("%s\n\n", eex);
	printf("this should return null, Xbut because that's the char it's looking forX, that is no longer the case, it will return NULL bc will not find NULL\n[NULL]\n");
	printf("%s\n", gg);
	printf("%s\n\n", ggx);
	printf("surely it differentiates between upper and lower case\nU\n");
	printf("%s\n", hh);
	printf("%s\n\n", hhx);
	printf("what if looking for spaces?\n[ ]\n");
	printf("%s\n", ii);
	printf("%s\n\n", iix);

	return (0);
}
