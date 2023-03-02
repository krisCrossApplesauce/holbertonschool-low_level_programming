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
	dog_t *doggo;
	int i, ii, nl, ol;

	if (name == NULL || age < 0 || owner == NULL)
	{ return (NULL); }

	doggo = malloc(sizeof(dog_t));

	if (doggo == NULL)
	{
		free(doggo);
		return (NULL);
	}

	while (name[nl])
	{ nl++; }
	while (owner[ol])
	{ ol++; }

	doggo->name = malloc(sizeof(char) * nl + 1);
	doggo->owner = malloc(sizeof(char) * ol + 1);

	if (doggo->name == NULL || doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo->owner);
		free(doggo);
		return (NULL);
	}

	for (i = 0; i <= nl; i++)
	{
		if (i < nl)
		{ doggo->name[i] = name[i]; }
		else
		{ doggo->name[i] = '\0'; }
	}

	doggo->age = age;

	for (ii = 0; ii <= ol; ii++)
	{
		if (ii < ol)
		{ doggo->owner[ii] = owner[ii]; }
		else
		{ doggo->owner[ii] = '\0'; }
	}

	return (doggo);
}
