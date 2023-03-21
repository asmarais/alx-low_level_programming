#include "main.h"

/**
 *jack_bauer - print all the hours and minutes of the day
 *
 *Return: void
 */

void jack_bauer(void)
{
	int c, k, q, p;

	for (c = 0; c <= 2; c++)
	{
		for (k = 0; k <= 9; k++)
		{
			if ((c <= 1) || (c == 2 && k <= 3))
			{
				for (q = 0; q <= 5; q++)

				{
					for (p = 0; p <= 9; p++)
					{
						_putchar('c');
						_putchar('k');
						_putchar(':');
						_putchar('q');
						_putchar('p');
					}
				}
			}
		}
	}
}
