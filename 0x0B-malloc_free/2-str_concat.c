#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: s1 + s2
 */

char *str_concat(char *s1, char *s2)
{
	int count1, count2, i, j;
	char *ar;

	count1 = 0;
	count2 = 0;

	for (i = 0; s1[i] != '\0' || s1 == NULL; i++)
		count1++;

	for (i = 0; s2[i] != '\0' || s2 == NULL; i++)
		count2++;

	ar = malloc((count1 + count2 + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		ar[i] = s2[j];
		i++;
		j++;
	}
	ar[i] = '\0';
	return (ar);
}
