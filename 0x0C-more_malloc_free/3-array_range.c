#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	j = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[j++] = i;
	}
	return (ptr);
}
