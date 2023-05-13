#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: edited array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (k = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

