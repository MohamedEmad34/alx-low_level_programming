#include "main.h"

/**
 * _strcmp - compare between two string
 * @s1: first string
 * @s2: second string
 * Return: if s1==s2 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
