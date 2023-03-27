#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array
 * @a: pointer to the first element of an array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	printf("%d", *a);
	n--;
	while (n != 0)
	{
		a++;
		printf(", %d", *a);
		n--;
	}
	printf("\n");
}
