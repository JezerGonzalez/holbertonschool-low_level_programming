#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - returns a pointer to the newly allocated string
 *@b: pointer
 *Return: Always 0
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (unsigned int *)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
		exit(98);
	*ptr = b;
	return (ptr);
}
