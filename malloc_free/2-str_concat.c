#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - concatenates two strings on the newly allocated memory
 *@s1: first string
 *@s2: second string
 *Return: returns NULL if malloc fails, ptr (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, totalsize, i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (size1 = 0; s1[size1] != '\0'; size1++)
	{}
	for (size2 = 0; s2[size2] != '\0'; size2++)
	{}
	totalsize = size1 + size2;
	ptr = malloc((totalsize + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; *s1 != '\0'; s1++, i++)
		ptr[i] = *s1;
	for (; *s2 != '\0'; s2++, i++)
		ptr[i] = *s2;

	return (ptr);
}
