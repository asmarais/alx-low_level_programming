#include "main.h"
/**
 * _strncpy -  a function that copy a string.
 * @dest: a pointer to the first character
 * @src: a pointer to the first character
 * @n: the number of character to be concatenated
 * Return: a pointer to the first character.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}
	srclen++;
	if (n > srclen)
		n = srclen;
	
	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
