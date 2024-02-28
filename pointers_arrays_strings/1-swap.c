#include "main.h"
/**
 * swap_int - swaps both values
 *
 * @a: value to be swapped
 * @b: value to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;

	*a = *b;
	*b = temp;
}
