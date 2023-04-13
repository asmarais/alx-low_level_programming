#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: unsigned int
 * Return: a pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, size, sign = n, count, count1;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	if (size2 <= sign)
		sign = size2;
	size = size1 + sign + 1;
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	
	for (count = 0; count < size1; count++)
	{
		arr[count] = s1[count];
	}
	for (count1 = 0; count1 < sign; count1++)
	{
		arr[count++] = s2[count1];
	}
	arr[count++] = '\0';
	return (arr);
}
