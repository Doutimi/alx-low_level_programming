#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - program that adds positive numbers.
*@argc: The number of command line arguments
*@argv: An array containing the program command line arguments
*
* Return: always 0
*/
int main(int argc, char **argv)
{
	int a, b, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%i\n", sum);

	return (0);
}
