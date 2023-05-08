#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * return: void
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	for (a -= 1; a >= 0; c--)
	{
		_putchar(s[c]);
	}
		_putchar('\n');
}
