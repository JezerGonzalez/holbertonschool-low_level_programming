#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	char c;

	ch = 'a';
	c = 'A';

	for (; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	for (; c <= 'Z' ; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
