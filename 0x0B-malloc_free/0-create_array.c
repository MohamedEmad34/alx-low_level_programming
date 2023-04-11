#include "main.h"
#include "stdlib"
/**
 * create_array - Entry point
 * @size: size of array
 * @c: character should fill array by it
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	ar = malloc(size + 1);
	while (i < size)
	{
		ar[i] =	c;
		i++;
	}
	return (ar);

}
