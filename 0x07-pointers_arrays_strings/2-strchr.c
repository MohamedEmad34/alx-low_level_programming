#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s: the string to returned
 * @c: character to first occurence from it
 * Return: pointer of the first ocuurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;

	}
	return (0);

}
