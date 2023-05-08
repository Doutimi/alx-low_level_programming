#include "main.h"

/**
 * puts2 - reverses a string
 * @str: string
 * return: void
 */

void puts2(char *str)
{
	int a;
	int index;

	while (str[index] != '\0')
	{
		index++;
	}
	for (a = 0; a < index; a += 2)
	{
		_putchar(str[a]);
	}
		_putchar('\n');
}
