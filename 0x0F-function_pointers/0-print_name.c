#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: a pointer to string
 * @f: a pointer to a function that takes char as its parameter
 * and return void
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
