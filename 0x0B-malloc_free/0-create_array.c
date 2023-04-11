#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: size of array
 * @c: character should fill array by it
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ar = (char *) malloc(size * sizeof(c));
	i = 0;
	while (i < size)
	{
		ar[i] =	c;
		i++;
	}
	return (ar);

}
