#include "main.h"

/**
 * _strncat - concatenates n bytes from src to dest
 * @dest: pointer to original string
 * @src: pointer to src
 * @n: n bytes
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
