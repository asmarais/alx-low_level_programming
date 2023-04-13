#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: a pointer to an array
 */

int *array_range(int min, int max)
{
	int *arr;
	int count;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	count = min;
	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = count;
		count++;
	}
	return (arr);
}
