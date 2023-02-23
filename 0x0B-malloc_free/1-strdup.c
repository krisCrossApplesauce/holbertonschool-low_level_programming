#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * ^which contains a copy of the string given as a parameter
 *
 * @str: pointer, string
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	unsigned int i = 0;

	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\n')
	{
		i++;
	}

	arr = malloc(sizeof(char) * i);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; arr[i]; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
