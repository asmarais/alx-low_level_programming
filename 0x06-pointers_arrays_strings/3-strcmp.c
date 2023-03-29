#include "main.h"
/**
 * _strcmp -  a function that compares two strings.
 * @s1: a string
 * @s2: a string
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;

	while (*s1 != '\0')
	{
		s1++;
		len1++;
	}

	while (*s2 != '\0')
	{
		s2++;
		len2++;
	}
	if (len1 > len2)
		return (1);

	else if (len1 < len2)
		return (-1);

	return (0);
}
