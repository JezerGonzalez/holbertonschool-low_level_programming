#include "main.h"
/**
 * _pow_recursion - prints the value of x to the power of y
 *
 *@x: base number
 *@y: raised to the power
 *
 * Return: Always 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
