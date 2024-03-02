#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an array in order separated by comma and space
 *
 *@a: poimter for the array
 *@n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == n - 1)
			printf("%d\n", a[i]);
	}
}
