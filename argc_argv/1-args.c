#include <stdio.h>
/**
 * main - prints the index of argv using argc - 1
 *@argc: total number of arrays
 *@argv: strings (Not used)
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
		printf("%d\n", argc - 1);
	return (0);
}
