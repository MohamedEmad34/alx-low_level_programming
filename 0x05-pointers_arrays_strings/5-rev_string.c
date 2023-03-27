#include "main.h"

/**
 * rev_string - print a string
 * @s: the string to print
 *
 * Return: void
 */

void rev_string(char *s)
{
	int a, b = 0;

	char tmp;

	while (s[b] != '\0')
	b++;

	for (a = b - 1; a >= b / 2; a--)
	{
		tmp = s[a];
		s[a] = s[b - a - 1];
		s[b - a - 1] = tmp;
	}
}
