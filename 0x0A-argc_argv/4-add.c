#include "main.h"
#include <stdio.h>

/**
 * check_num - checks that string is only digits
 * @s: string
 * Return: 1 if successful, 0 otherwise
 */

int check_num(char *s)
{
	int count;

	count = 0;
	while (count < _strlen(s))
	{
		if (!_isdigit(s[count]))
			return (0);
		count++;
	}
	return (1);
}
/**
 * main - entry
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int count, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			if (check_num(argv[count]))
				sum += _atoi(argv[count]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
