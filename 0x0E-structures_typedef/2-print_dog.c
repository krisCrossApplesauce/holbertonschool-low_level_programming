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
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
