#include "main.h"

/**
 *_isalpha - check if the caracter is a letter or not.
 *@c: the caracter to check
 *Return: 1 if it is a letter 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
