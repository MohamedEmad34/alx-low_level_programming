#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument
 * @argv: argument
 * Return: Always zero
 */

int main(int argc, char **argv)
{
	int result = 0, i, j;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
				printf("Error\n");
				return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}
	return (0);
}
