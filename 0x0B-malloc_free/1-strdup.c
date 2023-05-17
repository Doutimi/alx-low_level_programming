#include "main.h"
#include <stdlib.h>

/**
* _strdup - Points to duplicate string
* @str: string to be duplicated
*
* Return: pointer to string
*/
char *_strdup(char *str)
{
	int i = 0;
	int j = 1;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
		j++;
	}
	p = malloc((sizeof(char) * j) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < j)
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
