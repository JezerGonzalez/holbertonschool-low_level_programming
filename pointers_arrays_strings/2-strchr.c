#include "main.h"
/**
 *_strchr - finds a character in a string and prints the rest
 *
 * @s: pointer
 * @c: character to find
 *
 * Return: s + i (Success) || '\0' (Fail)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; s++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
