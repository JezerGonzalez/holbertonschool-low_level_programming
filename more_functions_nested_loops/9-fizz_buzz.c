#include <stdio.h>
/**
 * main - printing Fizz for multiples of 3, Buz for 5 and FizzBuzz for both
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num == 100)
			printf("Buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz ");
		else if (num % 3 == 0)
			printf("Fizz ");
		else if (num % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", num);
	}
	printf("\n");

	return (0);
}
