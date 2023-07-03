#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: bytes
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
	}

	return (n);
}
