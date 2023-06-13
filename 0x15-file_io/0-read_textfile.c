#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to standard output.
 * @filename: name of file being read
 * @letters: number of letters to be read and printed
 * Return: actual number of letter read and printed
 * 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	free(buf);
	close(fd);
	return (w);
}
