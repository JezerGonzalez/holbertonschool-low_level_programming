#include "main.h"
/**
 * print_square - prints a suare using '#'
 *
 * @size: size of square
 */
void print_square(int size)
{
	int square, line;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
		for (square = 0; square < size; square++)
			_putchar('#');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
