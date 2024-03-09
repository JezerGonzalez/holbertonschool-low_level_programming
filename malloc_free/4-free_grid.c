#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees all memory allocatwed
 *@grid: string to fre
 *@height: frees index from string
 *Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
