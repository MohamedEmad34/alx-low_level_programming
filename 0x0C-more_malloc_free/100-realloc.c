#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Entry point
 * @ptr: input
 * @old_size: input
 * @new_size: input
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mptr;
	char *ptrOld;
	unsigned int i;

	if (ptr == NULL)
	{
		mptr = malloc(new_size);
		if (mptr == NULL)
		return (NULL);
		return (mptr);
	}
	if (old_size == new_size)
	return (ptr);
	if (new_size == 0)
	{
	free(ptr);
	return (NULL);
	}
	mptr = malloc(new_size);
	if (mptr == NULL)
	return (NULL);
	ptrOld = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		mptr[i] = ptrOld[i];
	}
	free(ptr);
	return (mptr);
}
