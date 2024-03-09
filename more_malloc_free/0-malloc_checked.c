#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - returns a pointer to the newly allocated string
 *@b: pointer
 *Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
