#include "main.h"
/**
 * _islower - Checks for lowercase alphabets.
 * @c: the character in ascii
 * Return: 1 for lowercase
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}

