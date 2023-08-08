#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: pointer to grid to free
 * @heightL pointer to height
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int n;

	for (n = 0; n < heigh; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
