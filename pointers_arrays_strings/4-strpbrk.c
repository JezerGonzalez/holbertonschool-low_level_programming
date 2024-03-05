#include "main.h"
/**
 * _strpbrk - checks first occurence of byte
 *
 * @s: first string
 * @accept: second string to check byte
 *
 *Return: String *s (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int check;

	for (; s[j] != '\0'; j++)
	{
		for (check = 0; accept[check] != '\0'; check++)
		{
			if (s[j] == accept[check])
			{
				return (s + j);
			}
		}
	}
	return ('\0');
}
