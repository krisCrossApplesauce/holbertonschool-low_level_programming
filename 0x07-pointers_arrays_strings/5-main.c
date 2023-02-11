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

	char *a = "this should return NULL";
	char *b = "abcfgjkmpqvwxyz";
	char *ab;
	char *abx;
	char *c = "is it chill with parts of words?";
	char *d = "il";
	char *cd;
	char *cdx;
	char *e = "is looking for numbers an issue? (bc ASCII values)";
	char *g = "0123456789";
	char *eg;
	char *egx;
	char *h = "";
	char *i = "nowhere to look";
	char *hi;
	char *hix;
	char *j = "nothing to look for";
	char *k = "";
	char *jk;
	char *jkx;
	char *l = "repeating repeating repeating repeating";
	char *m = "repeating";
	char *lm;
	char *lmx;
	char *n = "first instance is at end";
	char *o = "end";
	char *no;
	char *nox;
	char *p = "contains part of, but not entire substring";
	char *q = "entirety";
	char *pq;
	char *pqx;
	char *r = "same as last but only missing last char";
	char *u = "butt";
	char *ru;
	char *rux;
/**
 * 	char *v = "looking for NULL char, but shouldnt find it?";
 * 	char *w = '\0';
 * 	char *vw;
 * 	char *vwx;
 * 	char *x = "looking after a NULL char \0, what happens?";
 * 	char *y = "\0, what";
 * 	char *xy;
 * 	char *xyx;
 */

	t = _strstr(s, f);

	ab = _strstr(a, b);
	abx = strstr(a, b);
	cd = _strstr(c, d);
	cdx = strstr(c, d);
	eg = _strstr(e, g);
	egx = strstr(e, g);
	hi = _strstr(h, i);
	hix = strstr(h, i);
	jk = _strstr(j, k);
	jkx = strstr(j, k);
	lm = _strstr(l, m);
	lmx = strstr(l, m);
	no = _strstr(n, o);
	nox = strstr(n, o);
	pq = _strstr(p, q);
	pqx = strstr(p, q);
	ru = _strstr(r, u);
	rux = strstr(r, u);
/**
 * 	vw = _strstr(v, w);
 * 	vwx = strstr(v, w);
 * 	xy = _strstr(x, y);
 * 	xyx = strstr(x, y);
 */

	printf("this should return NULL\nabcfgjkmpqvwxyz\n");
	printf("%s\n", ab);
	printf("%s\n\n", abx);
	printf("is it chill with parts of words?\nil\n");
	printf("%s\n", cd);
	printf("%s\n\n", cdx);
	printf("is looking for numbers an issue? (bc ASCII values)\n0123456789\n");
	printf("%s\n", eg);
	printf("%s\n\n", egx);
	printf("\nnowhere to look\n");
	printf("%s\n", hi);
	printf("%s\n\n", hix);
	printf("nothing to look for\n\n");
	printf("%s\n", jk);
	printf("%s\n\n", jkx);
	printf("repeating repeating repeating repeating\nrepeating\n");
	printf("%s\n", lm);
	printf("%s\n\n", lmx);
	printf("first instance is at end\nend\n");
	printf("%s\n", no);
	printf("%s\n\n", nox);
	printf("contains part of, but not entire substring\nentirety\n");
	printf("%s\n", pq);
	printf("%s\n\n", pqx);
	printf("same as last but only missing last char\nbutt\n");
	printf("%s\n", ru);
	printf("%s\n\n", rux);
/**
 * 	printf("looking for NULL char, but shouldnt find it?\n(NULL)\n");
 * 	printf("%s\n", vw);
 * 	printf("%s\n\n", vwx);
 * 	printf("looking after a NULL char (NULL), what happens?\n(NULL), what\n");
 * 	printf("%s\n", xy);
 * 	printf("%s\n\n", xyx);
 */

	printf("%s\n", t);
	return (0);
}
