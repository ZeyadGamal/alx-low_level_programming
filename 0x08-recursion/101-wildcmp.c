#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: string 1
 * @s1: string 2
 * Return: 1 if identical, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}

	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
