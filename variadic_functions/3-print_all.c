#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_c - prints character
 * @args: argument
 */
void print_c(va_list *args)
{
	printf("%c", va_arg(*args, int));
}
/**
 *print_s - prints string
 *@args: argument
 */
void print_s(va_list *args)
{
	char *string = va_arg(*args, char *);

	if (string == NULL)
		string = "(nil)";
	printf("%s", string);
}
/**
 *print_i - prints interger
 *@args: argument
 */
void print_i(va_list *args)
{
	printf("%d", va_arg(*args, int));
}
/**
 *print_f - print float
 *@args: argument
 */
void print_f(va_list *args)
{
	printf("%f", va_arg(*args, double));
}
/**
 *print_all - printf mini project
 *@format: format
 */
void print_all(const char * const format, ...)
{
	list letter[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL},
	};
	int i;
	int j = 0;

	va_list(args);
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (letter[i].cmp != NULL)
		{
			if (*letter[i].cmp == format[j])
			{
				printf("%s", separator);
				letter[i].f(args);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}
