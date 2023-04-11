#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Entry point
 * @s1: input
 * @s2: input
 * Return: concat of s1 s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	con = (char *) malloc(sizeof(char) * (i + j + 1));
	if (con == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
	con[i] = s1[i];
	i++;
	}
	while (s2[j] != '\0')
	{
		con[i] = s2[j++];
		i++;
	}
	con[i] = '\0';
	return (con);
}	
