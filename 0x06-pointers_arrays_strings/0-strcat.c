#include "main.h"

/**
 * _strcat -  a function that concatenates two strings.
 * @dest: a pointer to the first character
 * @src: a pointer to the first character
 * Return: a pointer to the first character.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, end = 0;

	while (dest[end] != '\0')
	{
		end++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[end + i] = src[i];
	}
	dest[end + i] = '\0';
	return (dest);
}
