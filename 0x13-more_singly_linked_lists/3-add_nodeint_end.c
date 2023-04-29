#include "lists.h"

/**
 *  add_nodeint_end - a function that adds a new node at the end of a list
 * @head: apointer to the pointer of the head ofthe list
 * @n: the integer to be added
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
