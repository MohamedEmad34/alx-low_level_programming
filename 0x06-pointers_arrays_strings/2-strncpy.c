#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Copy string to other string at most
 * @dest: the destination string
 * @src: source String
 * @n: number of n to copy
 * Return: A pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int dlen = 0, i;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = dlen; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
