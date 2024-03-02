#include "main.h"
/**
 * _strcpy - copies the string
 *
 * @dest: copied string
 * @src: string to be copied
 *
 * Return: dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}
