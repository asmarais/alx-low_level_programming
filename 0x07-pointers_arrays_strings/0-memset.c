#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s:the memory area.
 * @b:the character.
 * @n:the number of bytes to be filled.
 * Return: pointer to the memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
	{
		*temp++ = b;
	}
	return (s);
}
