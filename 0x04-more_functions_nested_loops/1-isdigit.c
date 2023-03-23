#include "main.h"

/**
 *_isdigit - a function that checks for a digit.
 *@c: the integer to be checked.
 *Return: 1 if c is a digit and 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= (int)'0' && c <= (int)'9')
	{
		return (1);
	}
	return (0);
}
