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

	if (length % 3 == 0)
	{
		i = (length - 1) / 2;
		for (; i < length; i++)
		{
			_putchar(str[i]);
		}
	}
	if (length % 5 == 0)
	{
		i = (length - 1) / 2;
		for (; i < length; i++)
		{
			_putchar(str[i]);
		}
	}

	i = length / 2;

	for (; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
