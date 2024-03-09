#include <stdlib.h>
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
	int arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(height * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (arr = 0; arr < height; arr++)
	{
		ptr[arr] = malloc(width * sizeof(int));
		if (ptr[idx] == NULL)
		{
			for (idx = arr - 1; idx >= 0; idx--)
				free(ptr[idx]);
			free(ptr);
			return (NULL);
		}
	}
	for (arr = 0; arr < height; arr++)
	{
		for (idx = 0; idx < width; idx++)
			ptr[arr][idx] = 0;
	}
	return (ptr);
}
