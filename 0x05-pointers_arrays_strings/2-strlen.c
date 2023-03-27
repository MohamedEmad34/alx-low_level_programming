#include "main.h"
#include <stdio.h>

/**
 * _strlen - Takes a pointer to an char and return length
 *
 * @str: An string
 *
 * Return: nothing.
 */
int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

