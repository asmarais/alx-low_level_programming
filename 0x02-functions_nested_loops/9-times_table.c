#include "main.h"

/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: void
 */

void times_table(void)
{
	int a, b, c, u, z;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (c > 9)
			{
				u = c % 10;
				z = (c - u) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(z + '0');
				_putchar(u + '0');

			}
			else
			{
				if (b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(c + '0');
			}
		}

		_putchar('\n');
	}
}
