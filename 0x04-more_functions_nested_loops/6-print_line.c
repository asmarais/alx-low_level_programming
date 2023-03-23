#include "main.h"

/**
 * print_line - a function that prints _ n times
 * @n: the number of times the character '_' should be printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
