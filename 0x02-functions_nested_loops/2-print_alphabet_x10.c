#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int e;
	int f;

	for ( f = 1; f <= 10; f++)
	{
		for (e = 97; e <= 122; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}

