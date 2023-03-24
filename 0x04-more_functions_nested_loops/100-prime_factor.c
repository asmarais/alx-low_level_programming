#include "main.h"
#include <stdio.h>
#include<math.h>

/**
  * main - Prints the largest prime factor of the number 612852475143
  *
  * Return: Always 0.
  */

int main(void)
{
	long int n, i, max = 0;

	n = 612852475143;

	for (i = (long)sqrt(n); i < n; i++)
	{
		if (n % i == 0)
		{
			max = i;
			break;
		}
	}
	printf("%ld\n", max);

	return (0);
}
