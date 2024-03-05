#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of an array in diagnal
 *
 * @a: pointer of array
 * @size: size of the array
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; )
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
		i++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
