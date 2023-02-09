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

	char *h = "128932127238732";

	char *i;

	char *j = "1287230898434";

	char *k;

	char *l = "this should return null, but because that's the char it's looking for";

	char *m;

	printf("hello:  ");
	f = _strchr(s, 'l');

	printf("this should return null:  ");
	b = _strchr(a, 'a');

	printf("will it return just the last char, like it should? (yes):  ");
	d = _strchr(c, ')');

	printf(":  ");
	g = _strchr(e, 'f');

	printf("128932127238732:  ");
	i = _strchr(h, '0');

	printf("1287230898434:  ");
	k = _strchr(j, '0');

	printf("this should return null, but because that's the char it's looking for:  ");
	m = _strchr(l, '\0');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	printf("%s\n", b);
	printf("%s\n", d);
	printf("%s\n", g);
	printf("%s\n", i);
	printf("%s\n", k);
	printf("%s\n", m);

	return (0);
}
