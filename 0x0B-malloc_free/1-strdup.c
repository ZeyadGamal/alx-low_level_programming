#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *ar;
	int i, count;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	count++;
	ar = malloc(count * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ar[i] = str[i];
	}
	return (ar);
}
