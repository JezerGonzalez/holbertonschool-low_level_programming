#include <stdio.h>
/**
 * main- printing all possible combinations
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	for (; num <= 57; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
