#include "main.h"

/**
 * _memset - fills specific bytes of memory with a constant byte
 * @s: points to memory area 
 * @n: bytes of memory to be filled
 * @b: constant byte
 * return: pointer
 */

char *_memset(char *s, char b, unsigned int n);
{
	int k;
	
	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
		return (s);
}
