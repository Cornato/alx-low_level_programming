#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional
 * @grid: int pointer
 * @height: int
 * Return: Null
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
