#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: int
 * @argv: array of arguments
 * Return: 0 if success and 1 otherwise
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc - 1 == 2)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
