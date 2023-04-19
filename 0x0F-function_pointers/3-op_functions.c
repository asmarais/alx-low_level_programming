#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two numbers
 * @a: an integer
 * @b: an integer
 * Return: the sum of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substraction of 2 numbers
 * @a: an integer
 * @b: an integer
 * Return: the sub of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplay 2 numbers
 * @a: an integer
 * @b: an integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of 2 numbers
 * @a: an integer
 * @b: an integer
 * Return: the division of 2 numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a /  b);
}
/**
 * op_mod - gives the reminder ofthe division of 2 numbers
 * @a: an integer
 * @b: an integer
 * Return: the sum of 2 numbers
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
