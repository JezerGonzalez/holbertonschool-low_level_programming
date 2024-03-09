#include <stdlib.h>
/**
 * free_grid - frees all memory allocatwed
 *@grid: string to fre
 *@height: frees index from string
 *Return: Always 0
 */
void free_grid(int **grid, int height)
{
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
