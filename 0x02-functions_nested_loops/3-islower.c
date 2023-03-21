#include "main.h"

/**
 * _islower : check if the character is lowercase or not
 *
 * Return : 1 if it is lowercase and 0 otherwise.
 */

int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(c == ch)
			return (1);
	}

	return (0);
}
