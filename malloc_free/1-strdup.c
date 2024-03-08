#include <stdlib.h>
#include "main.h"
/**
 *_strdup - returns the copy of the string from the newly allocated memory
 *@str: string to copy
 *Return:NULL if str is 0 NULL, if malloc fails, ptr (Success)
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (size = 0; *str == '\0'; size++)
	{}
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; ptr[i] == '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
