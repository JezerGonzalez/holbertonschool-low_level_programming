#include <stdio.h>
/**
 * main- printing single digits from 0 to 9
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
