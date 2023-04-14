#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Entry point
 * @s1: first string
 * @s2: second string
 * @n: input
 * Return: concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, l, k;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[i])
	i++;
	while (s2[j])
	j++;
	if (j <= n)
	l = i + j;
	else
	l = i + n;	
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
	return (NULL);
	for (k = 0; k <= i; k++)
	str[k] = s1[k];
	if (j <= n)
	n = j;
	for (k = 0; k < n; i++)
	{
		str[i] = s2[k];
		i++;
	}
	str[i] = '\0';
	return (str);
}
