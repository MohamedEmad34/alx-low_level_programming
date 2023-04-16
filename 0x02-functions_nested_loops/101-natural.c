#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 3, sum = 3;

	while (sum < 1024)
	{
		n +=3;
		sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
