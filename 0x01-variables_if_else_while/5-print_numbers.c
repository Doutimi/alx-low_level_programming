#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
