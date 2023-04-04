#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - func
 * @grid: param
 * @height: param
*/
void free_grid(int **grid, int height)
{
int counter;

for (counter = 0; counter < height; counter++)
{
free(grid[counter]);
}
free(grid);
}
