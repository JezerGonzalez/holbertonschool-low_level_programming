#include <stdio.h>
/**
 * main- Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int interger;
	float floating;
	long int li;
	long long int lli;
	char character;

	printf("Size of a char: %zu byte(s)\n", sizeof(character));
	printf("Size of a int: %zu byte(s)\n", sizeof(interger));
	printf("Size of a long int: %zu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lli));
	printf("Size of a float: %zu byte(s)\n", sizeof(floating));

	return (0);
}

