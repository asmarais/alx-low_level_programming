#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list
 * @head: a pointer to the head of the list
 * @index: the index of the node
 * Return: the node or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	temp = head;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
