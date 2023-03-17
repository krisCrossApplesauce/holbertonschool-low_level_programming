#include "lists.h"

/**
 * free_list - frees a list_t list
 *
 * @head: head of list to be freed
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;

		free(node->str);
		free(node);
	}

	free(head);
}
