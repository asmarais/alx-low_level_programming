#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to the first character
 * Return: void
 */

void rev_string(char *s)
{
	char *begin, *end;
	int count = 0, i;

	begin = s;
	end = s;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	end = --s;

	for (i = 0; i < count / 2; i++)
	{
		char c;

		c = *end;
		*end = *begin;
		*begin = c;
		begin++;
		end--;
	}
}
