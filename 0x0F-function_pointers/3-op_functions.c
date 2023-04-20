#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two number
 * @a: first number
 * @b: second number
 * Return: sum of two number
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_mul - mul two number
 * @a: first number
 * @b: second number
 * Return: mul of two number
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - div two number
 * @a: first number
 * @b: second number
 * Return: div of two number
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mod two number
 * @a: first number
 * @b: second number
 * Return: mod of two number
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
/**
 * op_sub - sub two number
 * @a: first number
 * @b: second number
 * Return: sub of two number
 */
int op_sub(int a, int b)
{
	return (a - b);
}
