#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Entry point
 * @n: input
 */
void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	return;
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j != 0)
				{
					if (i * j > 99)
					printf(", ");
					else if (i * j > 9)
					printf(",  ");
					else
					printf(",   ");
				}
				printf("%d", i * j);
			}
			printf("\n");
		}
	}
}
