#include "main"

/**
 * reverse_array - function to reverse array
 * @a: array to reverse it
 * @n: number of element in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index, tmp;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
