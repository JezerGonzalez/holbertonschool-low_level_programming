#include "main.h"
/**
 * helper - checks the math, denominator = 1, base = n
 * @den: denominator starting in 1
 * @base: number given (n)
 * Return: den (Success); -1 (Fail)
 */
int helper(int den, int base)
{
	if (den * den == base)
		return (den);
	if (den * den > base)
		return (-1);
	return (helper(den + 1, base));
}
/**
 *_sqrt_recursion - return natual square number
 *@n: given number
 *Return: returns natural aquare root
 */
int _sqrt_recursion(int n)
{
	return (helper(1, n));
}
