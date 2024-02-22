#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 */
void print_alphabet_x10(void)
{
	int alpha, new;

	for (alpha = 0; alpha <= 9; alpha++)
	{
		for (new = 97; new <= 122; new++)
			_putchar(new);
		_putchar('\n');
	}
}
