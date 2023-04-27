#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list.
 * @h: a pointer to the head of a linked list
 * Return: the size of a the list
 */

size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
