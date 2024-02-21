#include <stdio.h>
/**
 * main- printing alphabet and numbers in ascii
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexnum = 48;
	int hexalpha = 97;

	while (hexnum <= 57)
	{
		putchar(hexnum);
		hexnum++;
	}
	while (hexalpha <= 102)
	{
		putchar(hexalpha);
		hexalpha++;
	}
	putchar('\n');

	return (0);
}
