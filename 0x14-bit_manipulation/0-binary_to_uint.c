#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 * @b: string of 0s and 1s
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		uint = (uint * 2) + (b[i] - '0');
	}

	return (uint);
}
