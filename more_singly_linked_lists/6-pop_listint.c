#include "lists.h"

/**
 * pop_listint - deletes the head node of a singly linked list
 *
 * @head: listint_t **, the head node of a singly linked list
 *
 * Return: int, head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node = *head;
	int n = node->n;

	*head = node->next;
	free(node);

	return (n);
}
