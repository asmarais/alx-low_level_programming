#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: int
 * @index: index of a number
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 1;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
