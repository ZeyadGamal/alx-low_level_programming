#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: string to write to file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int length = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[length])
			length++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, length);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
