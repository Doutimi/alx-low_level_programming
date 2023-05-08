#include "main.h"

/**
 * puts2 - prints even characters
 * @str: string
 * return: void
 */

void puts2(char *str)
{
	int a;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (a = 0; a < j; a += 2)
	{
		_putchar(str[a]);
	}
		_putchar('\n');
}
