#include "main.h"
/**
 *_memcpy - copies a chunk of memory
 *
 * @dest: memory to fill
 * @src: memory to be copied
 * @n: ammount of memory to copy
 *
 *Return: dest (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int size;

	for (size = 0; size < n && src[size] != '\0'; size++)
		dest[size] = src[size];
	dest[size] = '\0';

	return (dest);
}
