#include "main.h"

char *make_buff(char *f);

/**
 * make_buff - makes a buffer
 * @f: file
 *
 * Return: buffer
 */
char *make_buff(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}
	return (buff);
}

/**
 * main - main entry
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buff;
	int file_from;
	int file_to;
	int re, wr;
	int check1, check2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = make_buff(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	re = read(file_from, buff, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(file_to, buff, re);
		if (file_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(98);
		}
		re = read(file_from, buff, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	free(buff);
	check1 = close(file_from);
	check2 = close(file_to);
	if (check1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", check1);
		exit(100);
	}
	if (check2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", check2);
	exit(100);
	}
	return (0);
}
