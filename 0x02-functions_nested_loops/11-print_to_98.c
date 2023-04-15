#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: input
 */
void print_to_98(int n)
{
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
		printf("%d, ", n);
		n--;
	}
	if (n > 98)
	printf("%d\n", n);
}
