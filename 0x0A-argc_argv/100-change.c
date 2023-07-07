#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int num, result, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && num >= 0; i++)
		while (num >= coins[i])
		{
			result++;
			num -= coins[i];
		}
	printf("%d\n", result);
	return (0);
}
