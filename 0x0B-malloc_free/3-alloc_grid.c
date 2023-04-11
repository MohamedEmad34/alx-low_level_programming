#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry oint
 * @width: width of the grid
 * @height: height of grid
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **all;
	int x, y;

	all = malloc(sizeof(int *) * height);
	if (width <= 0 || height <= 0 || all == 0)
		return (NULL);
	for (x = 0; x < height; x++)
	{
	all[x] = malloc(sizeof(int) * width);
	if (all[x] == NULL)
		{
			for (; x >= 0; x--)
				free(all[x]);
			free(all);
			return (NULL);
		}

	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		all[x][y] = 0;
	}
	return (all);
}
