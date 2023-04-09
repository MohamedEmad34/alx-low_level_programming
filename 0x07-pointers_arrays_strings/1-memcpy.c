#include "main.h"

/**
 * _memcpy - copies  n bytes from memory area src to memory
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory with byte change
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; i < r; i++) 
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);

}
