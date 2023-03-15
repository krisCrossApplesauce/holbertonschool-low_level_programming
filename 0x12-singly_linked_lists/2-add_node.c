#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: list_t double pointer, pointer to head of list
 * @str: str for new null
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i, sl = 0;
	char *s = strdup(str);
	list_t *new;

	if (str == NULL || head == NULL)
	{ return (NULL); }

	new = (list_t *) malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (s[sl])
	{ sl++; }

	new->str = malloc(sizeof(char) * sl + 1);

	if (new->str == NULL)
	{
		free(new);
		free(new->str);
		return (NULL);
	}

	for (i = 0; i <= sl; i++)
	{
		if (i < sl)
		{ new->str[i] = s[i]; }
		else
		{ new->str[i] = '\0'; }
	}

	new->len = sl;
	new->next = (*head);

	(*head) = new;
	return (*head);
}
