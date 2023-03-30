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
	char arr[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char index[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (*begin != '\0')
	{

		for (i = 0; i < 10; i++)
		{
			if (*begin == arr[i])
			{
				*begin = index[i];
			}
		}

		begin++;
	}

	return (s);

}
