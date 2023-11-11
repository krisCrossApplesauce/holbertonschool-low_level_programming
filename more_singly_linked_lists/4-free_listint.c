#include "lists.h"

/**
 * free_listint - frees a singly linked list
 *
 * @head: listint_t *, head node of the singly linked list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *n;

	while (head != NULL)
	{
		n = head;
		head = head->next;

		free(n);
	}

	free(head);
}
