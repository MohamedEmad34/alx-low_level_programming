#include "main.h"
/**
 * print_alphabet_x10: Entry - point
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char s;
	int i;

	for (i = 0; i < 10; i++)
	{
	for (s = 'a'; s <= 'z'; s++)
	_putchar(s);
	_putchar('\n');
	}
}
