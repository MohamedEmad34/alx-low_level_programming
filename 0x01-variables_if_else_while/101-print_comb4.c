#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
        int low;
	int high;
	int size;
        for (low = '0'; low < '8'; low++)
	{
        for (high = low + 1; high  < '9'; high++)
	{
	for (size = high + 1; size <= '9'; size++)
	{
	putchar(low);
	putchar(high);
	putchar(size);
	if (low = '7' && high == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}	
        putchar('\n');
        return (0);
}
