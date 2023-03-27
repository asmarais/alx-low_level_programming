#include "main.h"

/**
 * _strcpy - copy a string.
 * @dest: a pointer to a string
 * @src: a pointer to  a string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	dest = src;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	dest++;
	*dest = '\0';
	return (dest - count - 1);
}
