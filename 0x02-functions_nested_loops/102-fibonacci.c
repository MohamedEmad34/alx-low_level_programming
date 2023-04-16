#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b = 1, c = 2, i;

	for (i = 0; i < 50; i++)
	{
		a = b;
		b = c;
		c = a + b;
		if (i == 0)
		printf("%d, %d\n", a, b);
		if (i != 0)
		{
			printf(", ");
			printf("%d", c);
		}
		printf("\n");
	}
	return (0);
}
