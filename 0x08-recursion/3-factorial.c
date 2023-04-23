#include "main.h"
/**
 * factorial - Entry point
 * @n: input
 * Return: factorial value of n
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	return (1);
	else if (n < 0)
	return (-1);
	return (n * factorial(n - 1));
}
