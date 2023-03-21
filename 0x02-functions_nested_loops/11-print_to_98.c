#include "main.h"

/**
 *add - prints the 9 times table, starting with 0.
 *@n: the number to be checked
 *
 *Return: all the natural numbers from n to 98.
 */

void print_to_98(int n)
{
    int i, u, z, m;
    if (n < 98)
    {
        for (i = n; i < 98; i++)
        {
            printf("%d, ",i);
        }
    }
    else
    {
        for (i = n; i > 98; i--)
            printf("%d, ",i);
    }
    printf("98\n");
}
