#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: input
 * @size: input
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;

	if (nmemb == 0 || size == 0)
	return (NULL);
	l = nmemb * size;
	char *p = malloc(l);

	if (p == NULL)
	return (NULL);
	while (i < l)
	{
		p[i] = 0;
		i++;
	};
	return (p);
}