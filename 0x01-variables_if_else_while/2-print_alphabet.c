#include <stdio.h>

/**
 *main - print the lowercase alphabets followed by a new line
 *Return: 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
