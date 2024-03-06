#include "main.h"
/**
 * factorial - prints the factorial of a given number
 *
 * @n: given number
 *
 * Return: factorial number
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
