#include "main.h"

/**
 * print_number - prints numbers
 * @n: the nimber to be printed
 * Return: void
 */

void print_number(int n)
{
	int u, count = -1, num, p = 1, i = 1;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (num != 0)
	{
		num = (num - num % 10) / 10;
		count++;
	}
	while (i <= count)
	{
		p = p * 10;
		i++;
	}
	while (count != 0)
	{
		u = (int)(n / p);
		_putchar(u + '0');
		count--;
		n -= u * p;
		p /= 10;
	}
	if (n <= 9)
	{
		_putchar('0' + n);
	}
}
