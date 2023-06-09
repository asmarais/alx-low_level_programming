#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: a string
 *
 * Return: pointer to a string
 */

char *string_toupper(char *s)
{
	char *begin;

	begin = s;

	while (*begin != '\0')
	{
		if ((int)*begin >= (int)'a' && (int)*begin <= (int)'z')
		{
			*begin = (char)((int)*begin - 32);
		}
		begin++;
	}

	return (s);

}
