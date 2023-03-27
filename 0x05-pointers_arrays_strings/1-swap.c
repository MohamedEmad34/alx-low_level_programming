#include "main.h"
#include <stdio.h>

/**
 * swap_int - Takes a pointer to an two int and swap
 *
 * @a: An integer input pointer
 * @b: An integer input pointer
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
