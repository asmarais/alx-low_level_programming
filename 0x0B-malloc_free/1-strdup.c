#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: a string
 * Return: pointer to the copy of the string
 */

char *_strdup(char *str)
{
	int a = 0, x = 0;
	char *arr;

	while (str[a] != '\0')
		a++;
	if (str == NULL)
		return (NULL);
	arr = malloc(a * sizeof(char));
	while (x < a)
	{
		if (arr == NULL)
			return (NULL);
		arr[x] = str[x];
		x++;
	}
	return (arr);
}
