#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a list
 * @head: a pointer to the head of the list
 * Return: the sum of all the data (n) in the list
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
