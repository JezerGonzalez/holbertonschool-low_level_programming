#include "main.h"
/**
 * print_line - printing '_' n ammount of times
 *
 * @n: input for the ammount of '_'
 */
void print_line(int n)
{
	int line;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
			_putchar('_');
	}
		_putchar('\n');
}
