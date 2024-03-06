#include "main.h"
/**
 *prime - checks all numbers, div = 2, base = n
 *@div: dividend for the base
 *@base: given number (n)
 *Return: 0 (Fail); 1 (Success)
 */
int prime(int div, int base)
{
	if (div == base)
		return (1);
	else if (base % div == 0 || div < 2)
		return (0);
	else if (div < base)
		return (prime(div + 1, base));
	return (0);
}
/**
 *is_prime_number - checks for the prime number
 *@n: given number to verify
 *Return: Goes to helper
 */
int is_prime_number(int n)
{
	return (prime(2, n));
}
