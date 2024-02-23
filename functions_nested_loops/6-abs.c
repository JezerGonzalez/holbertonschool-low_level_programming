#include "main.h"
/**
 * _abs - computes the absolute value
 *
 * @n: Input
 *
 * Return: result
 */
int _abs(int n)
{
	int result;

	if (n < 0 || n == 0)
		result = n * -1;
	else
		result = n * 1;

	return (result);
}
