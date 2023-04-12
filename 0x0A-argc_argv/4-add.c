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
	int result = 0, i;
	
	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (check_num(argv[i]))
			{
				result += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", result);
	}
	return (0);
}
