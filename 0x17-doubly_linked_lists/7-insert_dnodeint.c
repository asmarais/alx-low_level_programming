#include "lists.h"

/**
 * insert_dnodeint_at_index - nserts a new node at a given position.
 * @h: a pointer that points at the head
 * @idx: the potion of the new node
 * @n: the value to be added
 * Return: the address of the node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *node;
	unsigned int count = 0;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	if (idx == 0)
	{
		node = add_dnodeint(h, n);
		return (node);
	}

	temp = *h;
	while (count != (idx - 1) && temp != NULL)
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	if (temp->next == NULL)
	{
		node = add_dnodeint_end(h, n);
		return (node);
	}
	else
	{
		node->n = n;
		node->next = temp->next;
		node->prev = temp;
		temp->next->prev = node;
		temp->next = node;
		return (node);
	}
}
