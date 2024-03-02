#include "main.h"
/**
 * puts_half - prints half the string
 *
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i, length;

	for (length = 0; str[length] != '\0'; length++)
	{}

	if (length % 2 == 0)
	{
		i = length / 2;
		for (; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (length % 2)
	{
		i = (length - 1) / 2;
		for (; i < length; i++)
		{
			_putchar(str[i + 1]);
		}
	}

	_putchar('\n');
}
