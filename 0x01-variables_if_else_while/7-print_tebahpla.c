#include <stdio.h>

/**
 * main prints the alphabet
 * Return: Always (success)
 */
int main(void)
{
        char c;

        for (c = 'z'; c  >= 'a'; c--)
        putchar(c);
	putchar('\n');
	return (0);
}
