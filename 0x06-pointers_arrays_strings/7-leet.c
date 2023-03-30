#include "main.h"
/**
 * leet - encode a string.
 * @s: a string
 *
 * Return: pointer to a string
 */

char *leet(char *s)
{
	char *begin;
	int i;

	begin = s;
	char arr[8] = {'4', '4', '*', 'e', 'a', '*', '*', 't'};
	char index[] = {'a', 'A',

	while (*begin != '\0')
	{

		for (i = 0; i < 8; i++)
		{
			if (*begin == arr[i] ||
			    *begin == (char)((int)arr[i] - 32)
			    && arr[i] != '*')
			{
				*begin = (char)(i + '0');
			}
		}

		begin++;
	}

	return (s);

}
