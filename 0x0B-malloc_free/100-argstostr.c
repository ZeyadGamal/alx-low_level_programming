#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, c, k;
	char *s;

	c = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0 ; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			c++;
	c += ac;

	s = malloc(c * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
			s[k++] = '\n';
	}
	return (s);
}
