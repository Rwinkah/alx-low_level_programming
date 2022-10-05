#include <stdlib.h>

/**
* free_grid - free memory from a 2D array
*
* @grid: matrix pointer
* @height: number of rows
* 
* Return: void
**/

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
