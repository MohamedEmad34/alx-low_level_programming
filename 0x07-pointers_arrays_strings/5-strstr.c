#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: inhput
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*p == *l && *p != '\0')
		{
		p++;
		l++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
