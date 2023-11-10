#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: list_t *, head of the function to be freed
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;

		free(n->str);
		free(n);
	}

	free(head);
}
