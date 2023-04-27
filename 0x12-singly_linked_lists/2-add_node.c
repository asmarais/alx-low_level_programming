#include "lists.h"
#include <string.h>
/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: a pointer to the first element of a list
 * @str: a pointer to a string
 * Return: Null or a linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	while (str[len])
		len++;
	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;

	*head = temp;
	return (temp);
}
