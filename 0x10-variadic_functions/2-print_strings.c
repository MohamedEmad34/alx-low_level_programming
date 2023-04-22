#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - to print strings
 * @separator: to separate String
 * @n: number of strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *st;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		st = va_arg(str, char *);
		if (st == NULL)
		printf("(nil)");
		else
		printf("%s", st);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
