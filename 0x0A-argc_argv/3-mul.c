#include <stdio.h>
#include <stdlib.h>

/**
*main - program that multiplies two numbers.
*@argc: The number of command line arguments
*@argv: An array containing the program command line arguments
*
* Return: always 0
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
