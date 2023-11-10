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
	list_t *n = head;

	if (head == NULL)
	{
		return;
	}

	while (n == NULL)
	{
		n = head->next;
		head->str = "";
		head->len = 0;
		head->next = NULL;

		head = n;
	}

	free(head);

	return;
}
