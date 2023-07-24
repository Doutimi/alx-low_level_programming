#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generate random valid passwords over 101-crackme
 * Return: 0
 */
int main(void)
{
	int random, i, chksum;

	srand(time(NULL));

	for (i = 0, chksum = 2772; chksum > 122; i++)
	{
		random = (rand() % 100);
		printf("%c", random);
		chksum -= random;
	}
	printf("%c", chksum);
	return (0);
}
