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
	int nl, ol;
	dog_t doggo;
	dog_t *doggo_p;

	if (name == NULL || age < 0 || owner == NULL)
	{ return (NULL); }

	doggo_p = malloc(sizeof(dog_t));

	if (doggo_p == NULL)
	{
		free(doggo_p);
		return (NULL);
	}

	while (name[nl])
	{ nl++; }
	while (owner[ol])
	{ ol++; }

	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;

	if (doggo.name == NULL || doggo.owner == NULL)
	{
		free(doggo_p);
		return (NULL);
	}

	doggo_p = &doggo;

	return (doggo_p);
}
