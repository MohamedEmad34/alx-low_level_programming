#include "main.h"

/**
 * _memset - fill a block of memory with a specific value 
 * @s: pointed to specific string
 * @n: number of byet to pointed
 * @b: constant byte
 * Returns: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}	
