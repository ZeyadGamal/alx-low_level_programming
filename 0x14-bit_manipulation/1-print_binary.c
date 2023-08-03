#include "main.h"

/**
 * print_binary - prints the binary number
 * @n: number
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int currN;
	int j = 0;
	int c = 0;

	for (j = sizeof(n) * 8 - 1; j >= 0; j--)
	{
		currN = n >> j;

		if (currN & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
