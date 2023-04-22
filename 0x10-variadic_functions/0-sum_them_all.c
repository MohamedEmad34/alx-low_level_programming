#include <stdarg.h>
#include <varargs.h>
/**
 * sum_them_all - variadic function
 * @n: first arg
 * Return: sum of all arg
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list app;
	unsigned int i, sum = 0;

	va_start(app, n);
	for (i = 0; i < n; i++)
		sum += va_arg(app, int);
	va_end(app);
	return (sum);
}
