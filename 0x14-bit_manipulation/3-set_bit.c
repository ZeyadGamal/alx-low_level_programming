#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: pointer to number
 * @index: index of bit
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n | (1UL << index));

	return (1);
}
