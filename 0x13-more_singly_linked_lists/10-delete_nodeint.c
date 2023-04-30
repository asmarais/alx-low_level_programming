#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a list
 * @head: apointer to the pointer that points at the head of the list
 * @index: the of  the element to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		temp = temp->next;
		if (!temp)
			return (-1);
		i++;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);
	return (1);
}
