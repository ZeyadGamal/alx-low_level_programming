# include <stdio.h>

/**
 * main - entry
 *
 * Return: Always 0
 */

int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar(digit1 + '0');
			putchar(digit2 + '0');
			if (digit1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
