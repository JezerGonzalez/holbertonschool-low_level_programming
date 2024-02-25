#include "main.h"
/**
 *
 */
void times_table(void)
{
	int mult1, mult2, result;

	for (mult1 = 0; mult1 <= 9; mult1++)
	{
		_putchar('0');

		for (mult2 = 1; mult2 <= 9; mult2++)
		{
			_putchar(',');
			_putchar(' ');

			result = mult1 * mult2;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
