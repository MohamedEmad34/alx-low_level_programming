#include "main.h"
/**
 * times_table - Entry point
 * Return: nothing
 */
void times_table(void)
{
	int i, j, z, y;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;
			if (z > 9)
			{
				y = z % 10;
				z = (z - y) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(z + '0');
				_putchar(y + '0');
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
		}
		_putchar('\n');
	}
}
