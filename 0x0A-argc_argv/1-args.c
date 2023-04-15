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
	if (argv[0])
		printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
