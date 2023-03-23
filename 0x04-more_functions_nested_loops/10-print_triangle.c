#include "main.h"

/**
* print_triangle - a function that prints a triangle.
* @size: the size of the triangle
* Return: void.
*/


void print_triangle(int size)
{
	int i, j, n;

	i = 0;
	n = size;
	while (i < size)
	{
		for (j = 1; j < n; j++)
		{
			_putchar(' ');
		}

		n--;

		while (j <= size)
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
