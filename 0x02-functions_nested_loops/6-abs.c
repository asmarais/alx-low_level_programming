 #include "main.h"

/**
 *_abs - return the absolute value of an integer
 *@n: the caracter to be checked
 *
 *Return: n if it is positive and -n otherwise.
 */

int _abs(int n)
{
	if(n < 0)
		return (-n);
	return (n);
}
