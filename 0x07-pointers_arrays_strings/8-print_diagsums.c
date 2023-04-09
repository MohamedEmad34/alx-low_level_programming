#include "main.h"

/**
 * print_diagsums - return sum of two diagonal of matrix
 * @a: matrix
 * @size: size of matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j,  sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}
	for (j = size - 1; j >= 0; j--)
	{
		sum2 += a[j * size + (size - j - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
