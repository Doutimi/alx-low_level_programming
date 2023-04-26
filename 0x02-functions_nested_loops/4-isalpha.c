#include "main.h"
/**
 *int _isalpha - Checks for alphabetic character.
 *
 *@c: The character in ASCII
 *
 *Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
