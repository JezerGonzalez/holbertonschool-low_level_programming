#include "main.h"
/**
 * _islower - verifies if the input is lowercase
 *
 * @c: number for evaluation
 *
 * Return: 1 Success
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
