#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: a pointer to a pointer that points at the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the integer to be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int  i = 0;
	listint_t *temp, *node;

	if (!head)
		return (NULL);
	temp = *head;
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	temp = *head;
	while (i < idx - 1)
	{

		temp = temp->next;
		i++;
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
