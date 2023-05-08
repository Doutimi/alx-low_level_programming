#include "main.h"

/**
 *char *_strcpy: copies string
 *@src: string to be copied
 *@dest: copied string
 *return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int k;

	for (k = 0; src[k] != '\0'; k++)
	{
		dest[k] = src[k];
	}
	dest[k++] = '\0';
	return (dest);
}
