#include "main.h"

/**
 * _strncat -  a function that concatenates two strings.
 * @dest: a pointer to the first character
 * @src: a pointer to the first character
 * @n: the number of character to be concatenated
 * Return: a pointer to the first character.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, end = 0, j = 0;

	while (dest[end] != '\0')
	{
		end++;
	}

	for (; src[i] != '\0' && j < n; j++, i++)
	{
		dest[end + i] = src[i];
	}
	dest[end + i] = '\0';
	return (dest);
}
