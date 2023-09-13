#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - fucntion frees a 2 dimensional
* array
* @grid: height dim of our grid
* @height: is a 2D grid
*
*Return:
*/

void free_grid(int **grid, int height)
{
int a;

for (a = 0; a < height; a++)
{
free(grid[a]);
}
free(grid);
}
