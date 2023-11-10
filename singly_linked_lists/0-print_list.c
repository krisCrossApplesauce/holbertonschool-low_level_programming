#include "lists.h"

/**
* print_list - prints a list
*
* @h: a singly linked list
*
* Return: size_t, the number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *n = h;
	int x = 0;
	size_t c = 0;

	while (x == 0)
	{
		if (n->str == NULL)
		{
			printf("[0] nil\n");
		}
		else
		{
			printf("[%ld] %s\n", strlen(n->str), n->str);
		}

		if (n->next)
		{
			n = n->next;
		}
		else
		{
			x = 1;
		}

		c++;
	}

	return (c);
}
