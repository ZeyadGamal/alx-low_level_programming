#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the standard output
 * @filename: file
 * @letters: number of letters to be read and printed
 *
 * Return: actual number of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *c = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	r = read(fd, c, letters);
	w = write(STDOUT_FILENO, c, r);

	free(c);
	close(fd);
	return (w);
}
