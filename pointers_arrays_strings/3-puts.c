#include "main.h"
/**
 * _puts - prints the string
 *
 * @str: pointer for the string
 */
void _puts(char *str)
{

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
