#include "main.h"
/**
 * *_strncpy - copies n ammount of characters
 *
 * @dest: empty string
 * @src: string to be coppied
 * @n: ammount of characters
 *
 * Return: dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}

	return (dest);
}
