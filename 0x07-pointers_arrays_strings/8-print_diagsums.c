#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a 2 D of integers.
 * @a: a square matrix of integers
 * @size: an input integer with the size of matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, max, sum1 = 0, sum2 = 0;

	max = size * size;
	for (i = 0; i <= max; i += size + 1)
		sum1 += a[i];

	for (i = size - 1; i <= max - size; i += size - 1)
		sum2 += a[i];

	printf("%d, %d\n", sum1, sum2);
}
