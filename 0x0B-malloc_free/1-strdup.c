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
	unsigned int i, sl;

	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}

	sl = 0;

	while (str[sl] != '\n')
	{
		sl++;
	}

	arr = (char *) malloc(sl);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < sl; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
