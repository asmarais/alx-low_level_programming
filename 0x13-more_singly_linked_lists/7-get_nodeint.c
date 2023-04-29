#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns
 * the nth node of a linked list.
 * @head: a pointer to the head of a linked list
 * @index: the index number
 * Return: returns the adress of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0, nodes = 0;
	listint_t *temp, *node;

	temp = head;
	node = head;
	if (!head)
		return (NULL);
	while (temp)
	{
		temp = temp->next;
		nodes++;
	}
	if (index >= nodes)
		return (NULL);
	while (i < index)
	{
		node = node->next;
		i++;
	}
	return (node);
}
