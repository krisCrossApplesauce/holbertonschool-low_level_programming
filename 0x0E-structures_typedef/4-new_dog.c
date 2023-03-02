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
	dog_t doggo;
	dog_t *doggo_p;

	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;
	doggo_p = &doggo;

	return (doggo_p);
}
