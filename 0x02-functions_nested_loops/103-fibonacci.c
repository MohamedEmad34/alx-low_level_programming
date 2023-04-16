#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long a = 1, b = 2, c, sum = 2;

	for (;;)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			if (c + sum > 5000000)
				break;
			sum += c;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
