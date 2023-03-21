#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: void
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = 0; b < 9; b++)
		{
			c = a * b;
			_putchar('c');
			_putchar(',');
		}
		c = a * b;
		_putchar('c');
	}
}
