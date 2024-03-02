#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 */
void puts2(char *str)
{
	int i, length;

	for (length = 0; str[length] != '\0'; length++)
	{}
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
