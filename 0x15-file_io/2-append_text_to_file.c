#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file to be created.
 * @text_content: string to write to the file.
 *
 * Return: 1 on success or if the file exists,
 * -1 on if the file does not exist or if filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int w, fd, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, i);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
