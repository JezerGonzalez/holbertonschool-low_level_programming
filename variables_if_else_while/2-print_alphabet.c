#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	ch = 'a';

	for (; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
