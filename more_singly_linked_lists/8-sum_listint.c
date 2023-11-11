#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a singly linked list
 *
 * @head: listint_t *, head node of the singly linked list
 *
 * Return: int, the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int sum = 0;

	if (head == NULL)
	{ return (sum); }

	while (node != NULL)
	{
		sum = sum + node->n;
		node = node->next;
	}

	return (sum);
}
