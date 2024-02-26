#include "main.h"
/**
 * more_numbers - prints numbers 0 to 14 ten times
 */
void more_numbers(void)
{
	int num, newLine;

	for (newLine = 0; newLine <= 9; newLine++)
	{
		for (num = 0; num <= 14; num++)
		{
		if (num >= 10)
			_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
