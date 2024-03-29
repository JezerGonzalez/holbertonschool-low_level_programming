#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastDigi;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigi = n % 10;

	if (lastDigi > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigi);
	}

	if (lastDigi == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigi);
	}

	if (lastDigi < 6 && lastDigi != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigi);
	}

	return (0);
}
