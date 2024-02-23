#include "main.h"
/**
 * print_sign - verifying if the input is les, greater or equal to 0
 *
 * @n: value to be verified
 *
 * Return: 1, 0, -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
