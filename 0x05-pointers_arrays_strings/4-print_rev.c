#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a pointer to the first character
 * Return: void.
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*(s--));
		len--;
	}
	_putchar('\n');
}
