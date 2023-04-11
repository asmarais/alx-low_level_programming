#include "main.h"
#include <stdlib.h>

/**
 * _strlen - return length of a string
 *
 * @s: char type
 * Return:  length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{

	}
	return (a);
}

/**
 * str_concat - a function that concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the seconf string
 * Return: a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, size, x = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size = size1 + size2 + 1;
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	while (x < size1)
	{
		arr[x] = s1[x];
		x++;
	}
	x = 0;
	while (x < size2)
	{
		arr[size1 + x] = s2[x];
		x++;
	}
	arr[size] = '\0';
	return (arr);
}
