#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int counter = 0;
	int a, n;

	for (a = 0; str[a] != '\0'; a++)
		counter++;
	n = counter / 2;

	if ((counter % 2) == 1)
		n = ((counter + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
