#include "lists.h"
#include <string.h>

/**
 * add_node_end - add elements at the end of the list
 * @head: a pointer to the pointer that points ats the head of the list
 * @str: a pointer to the string
 * Return: Null or the address of the new added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new_element;
	unsigned int len = 0;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
		return (NULL);
	while (str[len])
		len++;
	new_element->len = len;
	new_element->str = strdup(str);
	new_element->next = NULL;
	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_element;
	return (new_element);
}
