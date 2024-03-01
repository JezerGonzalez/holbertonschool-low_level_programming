#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes any lowercase characters to uppercase
 *
 * @a: pointer to change the lowercase
 *
 * Return: Changed string (Success)
 */
char *string_toupper(char *a)
{
	char *reset = a;

	for (; *a != '\0'; a++)
	{
		if (*a >= 'a' && *a <= 'z')
			*a -= 32;
	}

	return (reset);
}
