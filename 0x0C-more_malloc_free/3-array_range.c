#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Entry point
 * @min: input
 * @max: input
 * Return: array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
	return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL)
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
