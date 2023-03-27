#include "main.h"

/**
 * puts2 - print a string
 * @str: the string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	int a = 0, b;

	while (str[a])
		a++;
	for (b = 0; b < a; b += 2)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
