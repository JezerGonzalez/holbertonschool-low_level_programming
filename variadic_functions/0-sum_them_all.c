#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of variable ints
 *@n: ammount of int variables
 *Return: Sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list(args);
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);

	return (sum);
}
