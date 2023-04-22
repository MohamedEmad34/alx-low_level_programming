#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all: to print different of type
 * @format: input
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	
	va_list form;
	
	va_start(form, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c': printf("%s%c", sep, va_arg(form, int));
				break;
				case 'i': printf("%s%i", sep, va_arg(form, int));
				break;
				case 'f': printf("%s%f", sep, va_arg(form, double));
				break;
				case 's':
					str = va_arg(form, char *);
					if (str == NULL)
					printf("(nil)");
					else
					printf("%s%s", sep, str);
					break;
				default: i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(form);
}
