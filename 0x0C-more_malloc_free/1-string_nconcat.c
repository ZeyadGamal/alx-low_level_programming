#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: first n bytes of second string
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i, j;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;

	while (s1[len1] != '\0' && s1 != NULL)
		len1++;
	while (s2[len2] != '\0' && s2 != NULL)
		len2++;
	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		str[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		str[i++] = s2[j++];
	}
	str[i] = '\0';

	return (str);
}
