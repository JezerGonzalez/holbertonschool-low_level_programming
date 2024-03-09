#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 *@width: width of a 2D array
 *@height: height of a 2D array
 *Return:NULL if width or height is 0 NULL, if malloc fails, ptr (Success)
 */
int **alloc_grid(int width, int height)
{
	int idx = 0;
	int **ptr;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		ptr[j] = malloc(width * sizeof(int));
		if (ptr[j] == NULL)
		{
			for (--j; j >= 0; j--)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (idx = 0; idx < width; idx++)
			ptr[j][idx] = 0;
	}
	return (ptr);
}
