#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: struct dog, pointer where dog info is
 * @name: char, name of dog
 * @age: float, age of dog
 * @owner: char, name of owner of dog
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	if (age >= 0)
	{ d->age = age; }
	else
	{ d->age = 0; }
	d->owner = owner;
}
