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
	int i = 0, end = 0, j = 0;
	char *temp = dest;	

	for (i = 0; src[i] != '\0' && j < n; j++, i++)
	{
		dest[i] = src[i];
	}
	return (temp);
}
