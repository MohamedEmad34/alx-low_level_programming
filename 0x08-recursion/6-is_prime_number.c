#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Entry point
 * @n: input
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n == 1)
	return (0);
	return (_prime_number(n, 2));
}
/**
 * _prime_number - Entry point
 * @n: input
 * @i: input
 * Return: intrger value
 */
int _prime_number(int n, int i)
{
	if (n < 0 || n % i == 0)
	return (0);
	if (i >= n / 2)
	return 1;
	return (_prime_number(n, i + 1));
}
