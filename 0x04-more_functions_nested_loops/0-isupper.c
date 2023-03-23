#include "main.h"

/**
 *_isupper - a function that checks for uppercase character
 *@c: the integer to be checked
 *Return: 1 if the character is uppercase and 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= (int)'A' && c <= (int)'Z')
	{
		return (1);
	}
	return (0);
}
