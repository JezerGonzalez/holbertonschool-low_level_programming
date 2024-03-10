#include <stdlib.h>
#include "main.h"
/**
 *_calloc - allocates memory for an array
 *@nmemb: ammount of elements
 *@size: size of elements
 *Return: ptr2 (Success), NULL (Fail)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int total, i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	total = size * nmemb;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; ptr[i] == '\0'; i++)
		ptr[i] = 0;
	return (ptr);
}
