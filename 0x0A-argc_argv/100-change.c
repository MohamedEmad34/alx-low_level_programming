#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument
 * @argv: argument
 * Return: Always zero
 */

int main(int argc, char **argv)
{
	int result = 0, count;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		count = atoi(argv[1]);
		if (count >= 25)
		{
			result += count / 25;
			count = count % 25;
		}
		if (count >= 10)
		{
		result += count / 10;
		count = count % 10;
		}
		if (count >= 5)
		{
		result += count / 5;
		count = count % 5;
		}
		if (count > 0)
		result += count;
		printf("%d\n", result);
	}
	return (0);
}
