#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints all int variables
 *@separator: string separating all int variables
 *@n: ammount of int variables
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;
	int num;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
