#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: int
 * @argv: array of arguments
 * Return: 0 if success and 1 otherwise
 */
int main(int argc, char **argv)
{
	int num1, result;

	if (argc == 2)
	{
		num1 = atoi(argv[1]);
		while (num1 >= 25)
		{
			result++;
			num1 -= 25;
		}
		while (num1 >= 10)
		{
			result++;
			num1 -= 10;
		}
		while (num1 >= 5)
		{
			result++;
			num1 -= 5;
		}
		while (num1 >= 2)
		{
			result++;
			num1 -= 2;
		}
		while (num1 >= 1)
		{
			result++;
			num1 -= 1;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", result);
	return (0);
}
