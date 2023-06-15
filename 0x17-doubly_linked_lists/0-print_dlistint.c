#include "lists.h"
#include <stddef.h>
/**
 * print_dlistint -  a function that prints all the elements of a list.
 * @h: a pointer to a linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		length++;
		h = h->next;
	}
	return (length);
}
