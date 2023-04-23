#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - Entry point
 * @s: input
 * Return: integer value
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _strln(s) - 1));
}
/**
 * _strln - Entry point
 * @s: input
 * Return: length of string
 */
int _strln(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strln(++s));
}
/**
 * _palindrome - Entry point
 * @s: input
 * @leftI: input
 * @rI: input
 * Return: return 0 or 1
 */
int _palindrome(char *s, int leftI, int rI)
{
	if (leftI >= rI)
	return (1);
	if (s[leftI] != s[rI])
		return (0);
	return (_palindrome(s, leftI + 1, rI - 1));
}
