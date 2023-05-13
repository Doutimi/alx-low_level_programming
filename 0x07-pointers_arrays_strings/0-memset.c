#include "main.h"

/**
 * _memset - fills specific bytes of memory with a constant byte
 * @s: points to memory area
 * @n: bytes of memory to be filled
 * @b: constant byte
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
		return (s);
}
