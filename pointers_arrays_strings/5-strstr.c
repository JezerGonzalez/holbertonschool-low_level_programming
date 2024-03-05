#include "main.h"
/**
 *_strstr - prints the matching substring
 *@needle: second string
 *@haystack: first string
 *Return: haysatck (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *ptr = haystack;
		char *ptr1 = needle;

		while (*ptr == *ptr1 && *ptr1 != '\0')
		{
			ptr++;
			ptr1++;
		}
		if (*ptr1 == '\0')
			return (haystack);
	}
	return ('\0');
}
