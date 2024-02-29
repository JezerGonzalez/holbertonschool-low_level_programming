#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest:first string
 * @src: second string (added to first string)
 *
 * Return: Destination (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; )
		i++;

	for (; *src != '\0'; src++, i++)
		dest[i] = *src;

	return (dest);
}
