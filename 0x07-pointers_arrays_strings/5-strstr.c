#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: a pointer to a string
 * @needle: a pointer to a string
 * Return: a pointer to a string
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp = haystack;
	char *temp1;
	int test, i;

	if (*needle == '\0')
		return (haystack);
	while (*temp != '\0')
	{

		if (*temp == needle[0])
		{

			test = 1;
			temp1 = temp;

			for (i = 0; needle[i] != '\0'; i++)
			{
				if (needle[i] != *temp++)
					test = 0;
			}
		}
		if (test == 1)
			return (temp1);

		temp++;
	}
	return (NULL);
}
