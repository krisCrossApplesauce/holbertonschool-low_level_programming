#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog
 * @name: char, the name of the dog
 * @age: float, the age of the dog
 * @owner: char, the name of the owner of the dog
 *
 * Description: it- it makes a dog, that's about it
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
