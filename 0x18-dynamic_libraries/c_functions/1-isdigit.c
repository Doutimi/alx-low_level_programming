#include "main.h"

/**
* _isdigit - checks for a digit (0 to 9)
*@c: character to be checked
* Return: 1 if uppercase, otherwise 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
