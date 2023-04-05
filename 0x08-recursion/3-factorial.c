#include "main.h"
/**
 * factorial - prints a factorial of a number recursively
 * @n: an integer
 * Return: the factorial number.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n > 0)
		return (factorial(n - 1) * n);

	return (-1);
}
