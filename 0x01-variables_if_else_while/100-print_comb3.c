#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
        int low;
	int high;

        for (low = '0'; low < '9'; low++)
	{
	for (high = low+1 ; high <= '9'; high++)
	{
	putchar(low);
	putchar(high);
	if (low == '8' && high == '9')
	continue;	
	putchar(',');
	putchar(' ');	
	}	
	}
        putchar('\n');
	return (0);
}
