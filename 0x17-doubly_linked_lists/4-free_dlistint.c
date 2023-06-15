#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: a pointer to the head
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (temp)
	{
		free(temp);
	}
	free(head);
}
