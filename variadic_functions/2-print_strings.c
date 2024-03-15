#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_strings - prints all char variables
 *@separator: string separating all int variables
 *@n: ammount of int variables
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(args);
	unsigned int i;
	char *string;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if ((i != n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
