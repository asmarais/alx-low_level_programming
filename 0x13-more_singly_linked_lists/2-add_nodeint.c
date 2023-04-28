#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at the beginning of a list
 * @head: a pointer to a pointer that points at the head of the linked list
 * @n: the integer to be added
 * Return: the address to the added node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
