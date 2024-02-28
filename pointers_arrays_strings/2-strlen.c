#include "main.h"
/**
 * _strlen - checks the length of a string
 *
 * @s: pointer pointing at a string
 *
 * Return: length number
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; )
		i++;
	return (i);
}
