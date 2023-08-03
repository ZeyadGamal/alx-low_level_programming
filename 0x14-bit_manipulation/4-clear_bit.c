#include "main.h"

/**
 * clear_bit - clears value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	*n = *n & ~(1UL << index);
	return (1);
}
