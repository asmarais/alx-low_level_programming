#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to int
 * @size: size of the array
 * @cmp: apointer to function
 * Return: the index if it exists and -1 else.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
				return (i);
	}
		return (-1);
}
