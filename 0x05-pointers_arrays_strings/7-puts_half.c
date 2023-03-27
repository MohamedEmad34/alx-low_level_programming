#include "main.h"

/**
 * puts_half - print a string
 * @str: the string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int a = 0, k;

	while (str[a])
		a++;
	if (a % 2 == 1)
	{
		k = (a - 1) / 2;
		k++;
	}
	else
		k = a / 2;
	for (; k < a; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
