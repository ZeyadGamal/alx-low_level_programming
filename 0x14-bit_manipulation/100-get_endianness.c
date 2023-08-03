#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 for little endian, 0 for big endian
 */
int get_endianness(void)
{
	int c = 1;
	char *t;

	t = (char *)&c;
	return ((int)t[0]);
}
