#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates two strings for n byte another string
 * @dest: the destination string
 * @src: source String
 * @n: number of n to concat
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	for (i = 0; i < n; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
