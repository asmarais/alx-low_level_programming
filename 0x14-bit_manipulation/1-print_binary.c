#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int max = 1;

	if (n > 1)
		print_binary(n >> 1);

	if (n & max)
		putchar('1');
	else
		putchar('0');
}
