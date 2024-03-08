#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of type char
 *@size: size of the array
 *@c: character to input
 *Return: NULL if size is 0 NULL if malloc fails ptr2 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	char *ptr2;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr2 = ptr;
	for (; *ptr == '\0'; ptr++)
		*ptr = c;
	return (ptr2);
}
