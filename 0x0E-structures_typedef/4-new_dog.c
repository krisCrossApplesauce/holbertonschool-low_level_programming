#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog!
 *
 * @name: char, the name of the dog
 * @age: float, the age of the dog
 * @owner: char, the name of the owner of the dog
 *
 * Return: dog_t pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *the_dog;
	int i, ii, nl = 0, ol = 0;
	char *n;
	char *o;

	while (name[nl])
	{ nl++; }

	while (owner[ol])
	{ ol++; }

	n = malloc(sizeof(char) * nl);
	o = malloc(sizeof(char) * ol);

	for (i = 0; i <= nl; i++)
	{ n[i] = name[i]; }

	for (ii = 0; ii <= ol; ii++)
	{ n[ii] = owner[ii]; }

	new_dog.name = n;
	new_dog.age = age;
	new_dog.owner = o;
	the_dog = &new_dog;

	free(n);
	free(o);

	return (the_dog);
}
