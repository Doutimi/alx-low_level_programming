#include <stdio.h>

/**
*main - entry point
*@argc: The number of command line arguments
*@argv: An array containing the program command line arguments
*
* Return: always 0
*/
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a <= argc; a++)
	{
		printf("%d\n", argv[a]);
	}
	return (0);
}