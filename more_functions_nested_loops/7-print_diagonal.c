#include "main.h"
/**
 * print_diagonal - print '\' in a diagonal form
 *
 * @n: ammount of '\'
 */
void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('\\');
			_putchar('\n');
			if (line != n - 1)
			{
			for (space = 0; space <= line; space++)
				_putchar('$');
			}
		}
	}
	_putchar('\n');
}
