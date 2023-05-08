#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	o = open(filename, O_RDWR | O_APPEND);
	if (o == -1)
		return (-1);
	while (text_content && *(text_content + len))
		len++;
	w = write(o, text_content, len);
	close(o);
	if (w == -1)
		return (-1);
	return (1);
}
