#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Entry point
 * @array: array o element
 * @size: size of array
 * @cmp: pointer to function
 * Return: index of element which is match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
		return (i);
		i++;
	}
	return (-1);
}
