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

	if (*head)
		return (0);
	temp = *head;
	n = temp->n;
	free(temp);
	*head = (*head)->next;
	return (n);
}
