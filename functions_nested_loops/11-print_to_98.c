#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: starter number input
 *
 * Return: Void
 */
void print_to_98(int n)
{
	for (; n != 98; )
	{
		if (n < 98 && n >= 0)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
		if (n > 98)
		{
			if (n >= 100)
			{
				_putchar((n / 100) + '0');
				_putchar(((n % 100) / 10) + '0');
			}
			else
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
		if (n < 0)
		{
			_putchar('-');
			if (n <= -10)
				_putchar(((n * -1) / 10) + '0');
			_putchar(((n * -1) % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
