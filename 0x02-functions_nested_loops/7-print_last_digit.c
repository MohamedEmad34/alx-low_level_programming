#include "main.h"
/**
 * print_last_digit - Entry point
 * @c: input
 * Return: last digit
 */
int print_last_digit(int c)
{
	int l;

	l = c % 10;
	if (l < 0)
	l = l * -1;
	_putchar(l + '0');
	return (l);
}
