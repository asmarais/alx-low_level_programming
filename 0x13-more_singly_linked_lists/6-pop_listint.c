#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: a pointer to a pointer that points at the head of a list
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
