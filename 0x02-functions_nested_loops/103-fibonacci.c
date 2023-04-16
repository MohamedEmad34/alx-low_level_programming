#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long a = 1, b = 2, c, i;

	for (i = 0; i < 8; i++)
	{
		c = a + b;
		if (i == 0)
		printf("%ld, %ld, ", a, b);
		if (i != 0)
		{
			printf(", ");
		}
		printf("%ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
