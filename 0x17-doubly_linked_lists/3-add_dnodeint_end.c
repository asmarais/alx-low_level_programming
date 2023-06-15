#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of list
 * @head: a pointer to a pointer that points at the head of the list
 * @n: the value to be added
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	ptr->prev = temp;
	temp->next = ptr;
	return (ptr);
}
