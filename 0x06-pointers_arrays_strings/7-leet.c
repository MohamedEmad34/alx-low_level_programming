#include "main.h"

/**
 * leet - convert special character to number
 * @n: string to convert
 * Return: converting string
 *
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOlLtT";
	char s2[] = "4433001177";

	for (i = 0; n[i] != '\0'; i++)
		for (j = 0; j < 10; j++)
		{
		if (n[i] == s1[j])
		n[i] = s2[j];
		}
	return (n);
}
