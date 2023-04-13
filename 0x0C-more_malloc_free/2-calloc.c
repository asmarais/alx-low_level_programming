#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int count = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	while (count < nmemb * size)
	{
		arr[count] = 0;
		count++;
	}
	return (arr);
}
