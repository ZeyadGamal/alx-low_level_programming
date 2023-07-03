#include "main.h"
/**
 * _strstr - find first ocurrence of substring needle in string haystack
 * @haystack: string
 * @needle: substring
 * Return: pointer to beginning of located substring
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
