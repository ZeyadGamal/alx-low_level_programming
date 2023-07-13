#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - see if string is a digit
 * @s: string
 * Return: 1 if digit, otherwise 0
 */

int is_digit(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}

	return (1);
}

/**
 * _strlen - gets length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * error - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len_total, i;
	int *result;

	s1 = argv[1];
	s2 = argv[2];

	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	len_total = len1 + len2 + 1;
	result = malloc(sizeof(int) * len_total);
	if (result == NULL)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;





	}
