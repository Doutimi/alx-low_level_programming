#include "main.h"

/**
*print_line - print a line
*@n: number of times the line should be printed
*
* Return: no return
*/

void print_line(int n);
{
	int n;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
