#include "main.h"

/**
 * get_bit - returns the value of a given bit at a given index
 * @n: integer number
 * @index: index
 *
 * Return: value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8 - 1)
		return (-1);
	return ((n >> index) & 1);
}
