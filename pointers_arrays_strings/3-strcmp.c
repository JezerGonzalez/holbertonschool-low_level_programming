#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string to compare
 *
 * Return: comparison (Successful)
 */
int _strcmp(char *s1, char *s2)
{
	int cmp, i;

	i = 0;

	cmp = s1[0] - s2[0];
	while (cmp == 0)
	{
		if (s1[i] == '\0')
			break;
		i++;
		cmp = s1[i] - s2[i];
	}

	return (cmp);
}
