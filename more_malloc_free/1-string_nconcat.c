#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate two strings n ammount
 *@s1: first string
 *@s2: second string
 *@n: ammount of bytes
 *Return: ptr (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, totalsize;
	unsigned int i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{}
	if (n >= size2)
		totalsize = size1 + size2;
	else
		totalsize = size1 + n;
	ptr = malloc((totalsize + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
