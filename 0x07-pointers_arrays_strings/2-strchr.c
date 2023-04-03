#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: a string
 * @c: a character
 * Return: a pointer to the first occurence of the character.
 */

char *_strchr(char *s, char c)
{
	char *temp = s;

	while (*temp != '\0')
	{
		if (*temp == c)
			return (temp);
	}
	return (NULL);
}
