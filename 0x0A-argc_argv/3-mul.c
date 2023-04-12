#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: argument
 * @argv: argument
 * Return: Always zero
 */

int main(int argc, char **argv)
{
	int result = 0;

	if (argc < 3)
		printf("Error\n");
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
