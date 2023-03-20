#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 *
 * @head: double pointer, head of list
 *
 * Return: int, head->n
 * or 0 if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int i;

	if (*head == NULL)
	{ return (0); }

	new = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = new;

	return (i);
}
