#include <stdlib.h>
#include "main.h"
/**
 *array_range - returns numbers from min to max
 *@min: strating point
 *@max: finish line
 *Return: ptr (Success), NULL (Fail)
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, total;

	if (min > max)
		return (NULL);
	total = max - min;
	ptr = malloc((total + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
