#include "main.h"
/**
 * cap_string - capitaizes all words of a string
 *
 * @a: pointer for the string
 *
 * Return: Reset pointer (Success)
 */
char *cap_string(char *a)
{
	char *reset = a;

	if (*a >= 'a' && *a <= 'z')
		*a -= 32;

	while (*a != '\0')
	{
		if (*a == ',' || *a == ';' || *a == '.' || *a == '\n')
		{
			a++;
			if (*a >= 'a' && *a <= 'z')
				*a -= 32;
		}
		else if (*a == '!' || *a == '?' || *a == '"' || *a == '	')
		{
			a++;
			if (*a >= 'a' && *a <= 'z')
				*a -= 32;
		}
		else if (*a == '(' || *a == ')' || *a == ' ')
		{
			a++;
			if (*a >= 'a' && *a <= 'z')
				*a -= 32;
		}
		else if (*a == '{' || *a == '}')
		{
			a++;
			if (*a >= 'a' && *a <= 'z')
				*a -= 32;
		}
		else
			a++;
	}

	return (reset);
}
