#include "main.h"
/**
 * reverse_array -  a function that reverses the content of an array.
 * @a: an array
 * @n: number of elemnts in an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int *begin, *end, i;

	begin = a;
	end = (a + n - 1);

	for (i = 0; i < (n / 2); i++)
	{
		int c;

		c = *begin;
		*begin = *end;
		*end = c;
		begin++;
		end--;
	}

}
