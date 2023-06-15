#include "lists.h"

/**
 * insert_dnodeint_at_index - nserts a new node at a given position.
 * @h: a pointer that points at the head
 * @idx: the potion of the new node
 * @n: the value to be added
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = *head;
	while (count != idx && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx == 0)
	{
		node = add_dnodeint(&head, n);
		return (node);
	}
	else if (count == idx && temp == NULL)
	{
		node = add_dnodeint_end(&head, n);
		return (node);
	}
	else if (count == idx && temp != NULL)
	{
		node->n = n;
		node->prev = temp->prev;
		(temp->prev)->next = node;
		node->next = temp;
		temp->prev = node;
	}
}
