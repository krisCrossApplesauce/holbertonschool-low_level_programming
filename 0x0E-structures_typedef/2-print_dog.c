#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog struct
 *
 * @d: struct dog, what's being printed
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");

		if (d->name == NULL)
		{ printf("(nil)\n"); }
		else
		{ printf("%s\n", d->name); }

		printf("Age: ");

		if (d->age < 0)
		{ printf("(nil)\n"); }
		else
		{ printf("%.6f\n", d->age); }

		printf("Owner: ");

		if (d->owner == NULL)
		{ printf("(nil)\n"); }
		else
		{ printf("%s\n", d->owner); }
	}
}
