#include "main.h"
/**
 * print_last_digit - prints the last digit of the input
 *
 * @r: input
 *
 * Return: last_digit
 */
int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;
	if (last_digit < 0)
		last_digit = -1 * last_digit;
	_putchar(last_digit + '0');

	return (last_digit);
}
