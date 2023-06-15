#include "lists.h"
#include <stddef.h>
/**
 * dlistint_len -  a function that prints all the elements of a list.
 * @h: a pointer to a linked list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}
