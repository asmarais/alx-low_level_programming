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

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	printf("%ld", max);

	return (0);
}
