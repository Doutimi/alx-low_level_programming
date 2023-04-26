#include "main.h"
/**
 *print_to_98 - prints 0 to 98
 *
 *@n: number to start printing from
 *
 * Return: sum
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
		{
		_putchar(i);
		_putchar(44);
		_putchar(32);
		if (i > 98)
			{
			break;
			}
		}
}
