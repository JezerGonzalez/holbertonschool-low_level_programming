#include "main.h"
/**
 * _isdigit - verifies if the input is a digit
 *
 *  @c: input to be verified
 *
 *  Return: 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
