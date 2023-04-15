#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: int the number of arguments
 * @argv: array of arguments
 * Return: int
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
