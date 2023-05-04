#include "main.h"
#include "string.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a stribg of character
 * Return: the unsigned int or a 0
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int n = 0, base = 1;

	if (b == NULL)
		return (0);
	len = strlen(b);
	while (len)
	{
		if (b[len - 1] != '1' && b[len -1] != '0')
			return (0);
		if (b[len - 1] == '1')
			n += base;
		base *= 2;
		len--;
	}
	return (n);
}
