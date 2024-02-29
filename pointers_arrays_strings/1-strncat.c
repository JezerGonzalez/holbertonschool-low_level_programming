#include "main.h"
/**
 * _strncat - concatenates two strings n ammount of bytes
 *
 * @dest:first string
 * @src: second string (added to first string)
 * @n: ammount of bytes
 *
 * Return: Destination (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}
	for (j = 0; *src != '\0' && j < n; src++, i++, j++)
		dest[i] = *src;

	return (dest);
}
