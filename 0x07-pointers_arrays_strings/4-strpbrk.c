#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: a string
 * @accept: a string
 * Return: a string
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp = s;
	char *temp1;

	while (*temp != '\0')
	{
		temp1 = accept;
		while (*temp1 != '\0')
		{
			if (*temp == *temp1)
				return (temp);
			temp1++;
		}
		temp++;
	}
	return (NULL);
}
