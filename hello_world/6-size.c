#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int interger;
	float floating;
	double df;
	char character;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of a int: %zu byte(s)\n", sizeof(interger));
	printf("Size of a float: %zu byte(s)\n", sizeof(floating));
	printf("Size of a double: %zu byte(s)\n", sizeof(df));

	return (0);
}

