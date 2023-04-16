#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int a = 1, b = 2, c, i;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		if (i == 0)
		printf("%u, %u, ", a, b);
		if (i != 0)
		{
			printf(", ");
		}
		printf("%u", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
