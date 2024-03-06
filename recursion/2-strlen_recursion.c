#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: string length value
 */
int _strlen_recursion(char *s)
{
	char *ptr = s;

	if (*ptr == '\0')
		return (0);
	ptr++;
	return (_strlen_recursion(ptr) + 1);
}
