#include <stdlib.h>
/**
 *_calloc - allocates memory for an array
 *@nmemb: ammount of elements
 *@size: size of elements
 *Return: ptr2 (Success), NULL (Fail)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int *ptr2;
	unsigned int total;

	if (size == 0 || nmemb == 0)
		return (NULL);
	total = size * nmemb;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ptr2 = ptr;
	for (; *ptr != '\0'; ptr++)
		*ptr = 0;
	return (ptr2);
}
