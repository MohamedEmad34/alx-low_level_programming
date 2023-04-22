#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - to print number
 * @separator: input
 * @n: input
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list app;
	unsigned int i;

	va_start(app, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(app, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
		printf("\n");
		va_end(app);
}
