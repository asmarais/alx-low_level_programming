#include "search_algos.h"

/**
 *binary_search -  a function that searches for a value
 *in an array of integers using the Binary search algorithm
 *@array:  a pointer to the first element of the array to search in
 *@size: the number of elements in array
 *@value: the value to search for
 *
 *Return: the return the first index where value is located or -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1, mid = 0;
	size_t i;

	if (array == NULL)
		return (-1);
	while (start <= end)
	{
		mid = (start + end) / 2;
		printf("Searching in array: ");
			for (i = start; i <= end; i++)
			{
				printf("%d", array[i]);
				if (i == end)
					printf("\n");
				else
					printf(", ");
			}
		if (array[mid] == value)
			return (mid);
		if (value > array[mid])
			start = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}
