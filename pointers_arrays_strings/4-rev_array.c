#include "main.h"
#include <stdio.h>
/**
 * reverse_array - prints an array in reverse
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int limit = n / 2;
	int tmp;
	int *ptr = a;

	for (; n > limit; ptr++, n--)
	{
		tmp = *ptr;
		*ptr = a[n - 1];
		a[n - 1] = tmp;
	}
}
