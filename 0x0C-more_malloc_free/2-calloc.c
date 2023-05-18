#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int c = 0;
	int d = 0;
	char *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	d = nmemb * size;
	m = malloc(d);

	if (m == NULL)
		return (NULL);
	while (c < d)
	{
		m[c] = 0;
		c++;
	}
	return (m);
}
