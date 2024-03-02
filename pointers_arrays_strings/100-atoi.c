#include "main.h"
/**
 * _atoi - converts a string to an interger
 *
 *@s: string to be converted
 *
 * Return: num (Success)
 */
int _atoi(char *s)
{
	int i = 0;
	int num = 0;
	int sign = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + sign * (s[i] - '0');
		i++;
	}

	return (num);
}
