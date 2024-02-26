#include "main.h"
/**
 * _isupper - verifies if the character is an uppercase
 *
 * @c: variable to be evaluated
 *
 * Return: 1 (successful)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
