#include "main.h"
/**
 * print_alphabet - printing the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a = 97;

	for (; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
