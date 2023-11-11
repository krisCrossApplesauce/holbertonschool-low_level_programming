#include "lists.h"
#include "4-free_listint.c"

/**
 * free_listint2 - frees a singly linked list
 *
 * @head: listint_t **, head node of the singly linked list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	if (!(head))
	{ return; }

	free_listint(*head);
	*head = NULL;
}
