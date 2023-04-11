#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array
 * @size: the size of the array
 * @c: the character
 * Return: pointer to the first character of the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
