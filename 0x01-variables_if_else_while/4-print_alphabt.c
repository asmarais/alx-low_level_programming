#include <stdio.h>

/**
 * main - print the alphabets in lower case and in uppercase.
 * Return: 0.
 */

int main(void)
{
	char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
    if ( letter == 'e' || letter == 'q')
        continue;
		putchar(letter);
}
	
	putchar('\n');

	return (0);
}
