#include "main.h"
/**
 * _strspn - gets length of a prefix
 *
 * @s: first string
 * @accept: second string
 *
 *Return: value (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int value = 0;
	int i = 0;
	int j = 0;
	int check = 0;

	while (accept[i] != '\0')
		i++;
	while (s[j] != '\0')
	{
		if (accept[check] == s[j])
		{
			value++;
			j++;
			check = 0;
		}
		else if (check == i)
		{
			return (value);
		}
		else
			check++;
	}

	return (value);
}
