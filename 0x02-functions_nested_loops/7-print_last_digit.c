#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@n: the number to be checked
 *
 *Return: return the last digit.
 */

int print_last_digit(int n)
{
	int c;

	if ( n < 0)
		n = -n;
	c = n % 10;
        return (c);
}
