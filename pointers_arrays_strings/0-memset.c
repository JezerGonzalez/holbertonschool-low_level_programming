#include "main.h"
/**
 * _memset - fills n bytes of memory
 *
 *@s: pointer
 *@b: byte to fill memory
 *@n: ammount to be filled
 *
 * Return: s (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int size;

	for (size = 0; size < n; size++)
		s[size] = b;

	return (s);
}
