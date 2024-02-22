#include "main.h"
/**
 * _isalpha - verifies lowercase and uppercase
 *
 * @c: input for verification
 *
 * Return: 1 Success
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
