#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Entry point
 * @b: input
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
