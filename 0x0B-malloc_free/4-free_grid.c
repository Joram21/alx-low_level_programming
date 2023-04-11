#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a created 2 Dimensional grid
  * @grid: 2D array of type int
  * @height: int type
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	/* loop through array */
	for (i = 0; i <= height - 1; i++)
		/* free allocated memory */
		free(grid[i]);
	/* fee entire array */
	free(grid);

}
