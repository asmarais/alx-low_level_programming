#include "main.h"

/**
 * _memcpy - compies memory area
 * @dest: pointer to memory area
 * @src: pointer to memory area
 * @n: the number of bytes to be copied
 * Return: pointer to memory area.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
	{
		*src++ = *temp++;
	}
	return (dest);
}
