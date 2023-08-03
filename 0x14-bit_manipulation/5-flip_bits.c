#include "main.h"

/**
 * flip_bits -  number of bits to flip to get from n to m
 * @n: n
 * @m: m
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i;

	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			count++;
	return (count);
}
