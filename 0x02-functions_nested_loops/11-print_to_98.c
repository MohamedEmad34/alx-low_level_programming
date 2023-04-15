#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: input
 */
void print_to_98(int n)
{
	int i = 0;

	while (n <= 98)
	{
		if (n == 98)
		{
		printf("%d\n", n);
		break;
		}
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		i = 1;
		printf("%d, ", n);
		n--;
	}
	if (i == 1)
	printf("%d\n", n);
}
