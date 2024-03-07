#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - prints the sum of 2 intergers
 *@argc: argument count
 *@argv: argument value
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int result = 0;
	int j = 0;
	(void)argc;

	for (count = 1; argv[count] != NULL ; count++)
	{
		for (j = 0; argv[count][j] != '\0'; j++)
		{
			if (isdigit(argv[count][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[count]);
	}
	printf("%d\n", result);
	return (0);
}
