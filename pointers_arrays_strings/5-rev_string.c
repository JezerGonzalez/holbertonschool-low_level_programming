#include "main.h"
/**
 * rev_string - reverse a string
 *
 *@s: string to be reversed
 */
void rev_string(char *s)
{
	int i;
	int limit;
	char *ptr = s;
	char tmp;

	for (i = 0; s[i] != '\0'; i++)
	{}

	limit = i;

	for (; i > limit / 2; ptr++, i--)
	{
		tmp = *ptr;
		*ptr = s[i - 1];
		s[i - 1] = tmp;
	}
}
