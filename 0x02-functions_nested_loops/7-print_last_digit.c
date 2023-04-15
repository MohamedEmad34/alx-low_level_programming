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
	_putchar(c);
	return (l);
}
