#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: int
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	exit(EXIT_SUCCESS);
}
