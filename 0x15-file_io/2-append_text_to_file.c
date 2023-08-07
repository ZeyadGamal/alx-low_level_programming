#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: text to be appended
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	int w;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[length])
			length++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, length);
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
