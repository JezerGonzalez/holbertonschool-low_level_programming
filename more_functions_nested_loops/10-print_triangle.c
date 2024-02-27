#include "main.h"
/**
 * print_triangle - Prints a triangle
 *
 * @size: size of the triangle
 *
 */
void print_triangle(int size)
{
	int height, width, empty;

	if (size > 1)
	{
		for (height = 1; height <= size; height++)
		{
			for (empty = size; empty > height; --empty)
				_putchar('-');
			for (width = 0; width < height; ++width)
				_putchar('#');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
