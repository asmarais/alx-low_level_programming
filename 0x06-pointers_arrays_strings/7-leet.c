#include "main.h"
/**
 * leet - encode a string.
 * @s: a string
 *
 * Return: pointer to a string
 */

char *leet(char *s)
{
	int i = 0, j;

	char arr[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char index[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[i] != '\0')
	{

		for (j = 0; j < 10; j++)
		{
			if (s[i] == arr[j])
			{
				s[i] = index[j];
			}
		}

		i++;
	}

	return (s);

}
