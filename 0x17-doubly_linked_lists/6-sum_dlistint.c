#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of a list
 * @head: a pointer to the head of a linked list
 * Return: the sum of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
