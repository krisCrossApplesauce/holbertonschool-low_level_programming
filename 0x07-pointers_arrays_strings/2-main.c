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

	char *ff;

	char *a = "this should return null";
	char *b;
	char *bb;
	char *c = "will it return just the last char, like it should? (yes)";
	char *d;
	char *dd;
	char *e = "";
	char *g;
	char *gg;
	char *h = "128932127238732";
	char *i;
	char *ii;
	char *j = "1287230898434";
	char *k;
	char *kk;
	char *l = "this should return null, but because that's the char it's looking for";
	char *m;
	char *mm;

	printf("hello:  ");
	f = _strchr(s, 'l');
	ff = strchr(s, 'l');

	printf("this should return null:  ");
	b = _strchr(a, 'a');
	bb = strchr(a, 'a');

	printf("will it return just the last char, like it should? (yes):  ");
	d = _strchr(c, ')');
	dd = strchr(c, ')');

	printf(":  ");
	g = _strchr(e, 'f');
	gg = strchr(e, 'f');

	printf("128932127238732:  ");
	i = _strchr(h, '0');
	ii = strchr(h, '0');

	printf("1287230898434:  ");
	k = _strchr(j, '0');
	kk = strchr(j, '0');

	printf("this should return null, Xbut because that's the char it's looking forX that is no longer the case, it will return NULL bc will not find NULL:  ");
	m = _strchr(l, '\0');
	mm = strchr(l, '\0');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	printf("%s\n", ff);
	printf("%s\n", b);
	printf("%s\n", bb);
	printf("%s\n", d);
	printf("%s\n", dd);
	printf("%s\n", g);
	printf("%s\n", gg);
	printf("%s\n", i);
	printf("%s\n", ii);
	printf("%s\n", k);
	printf("%s\n", kk);
	printf("%s\n", m);
	printf("%s\n", mm);

	return (0);
}
