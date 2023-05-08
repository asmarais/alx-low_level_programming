#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: the file
 * @letters: the number of letters to be printed
 * Return: the number of letters to be printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *ptr;

	if (filename == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	ptr = malloc(letters);
	if (ptr == NULL)
		return (0);
	r = read(o, ptr, letters);
	if (r == -1)
	{
		free(ptr);
		return (0);
	}
	w = write(STDOUT_FILENO, ptr, r);
	free(ptr);
	close(o);
	if (w == -1)
		return (0);
	return (w);
}
