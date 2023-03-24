#include "main.h"
#include<math.h>

/**
 * print_number - prints numbers
 * @n: the nimber to be printed
 * Return: void
 */

void print_number(int n)
{
	int u, count = -1, num;

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

	while (count != 0)
	{
		int p = (int)pow(10, count);

		u = (int)(n / p);
		_putchar(u + '0');
		count--;
		n -= u * p;
	}
	if (n <= 9)
	{
		_putchar('0' + n);
	}

}
