#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: pointer to string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
