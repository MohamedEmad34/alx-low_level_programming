#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Entry point
 * @str: input
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *ar;
	int i = 0, r = 0;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	i++;
	ar = malloc(sizeof(char) * (i + 1));
	if (ar == NULL)
	return (NULL);
	while (r < i)
	{
		ar[r] = str[r];
		r++;
	}
	return (ar);
}
