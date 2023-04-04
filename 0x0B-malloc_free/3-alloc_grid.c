#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - func
 * @width: param
 * @height: param
 * Return: int
*/
int **alloc_grid(int width, int height)
{
int **grid;
int len;
int i;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(sizeof(int) * height);
if (grid == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
free(grid[i]);
free(grid);
return (NULL);
}
}
i = len = 0;
for (i = 0; i < height; i++)
{
for (len = 0; len < width; len++)
{
grid[i][len] = 0;
}
}
return (grid);
}
