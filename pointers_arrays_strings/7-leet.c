#include "main.h"
/**
 * leet - replacing characters in a string
 *
 * @a: pointer for the original string
 *
 * Return: modified string (Success)
 */
char *leet(char *a)
{
	char num[] = "4433007711";
	char letter[] = "aAeEoOtTlL";
	int i, j;

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (a[i] == letter[j])
			{
				a[i] = num[j];
				break;
			}
		}
	}
	return (a);
}
