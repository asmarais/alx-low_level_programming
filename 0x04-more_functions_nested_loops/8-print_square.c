#include "main.h"

/**
* print_square - a function that draws a diagonal square on the terminal.
* @n: the number of time '#' should be printed
* Return: void.
*/

void print_square(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (i <= 0)
	{
		_putchar('\n');
	}

}
