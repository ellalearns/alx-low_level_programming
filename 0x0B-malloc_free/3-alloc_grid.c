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

if (width <= 0 || height <= 0)
{
return (NULL);
}

grid = malloc(sizeof(int) * (width * height));

if (grid == NULL)
{
return (NULL);
}

len = 0;

while (grid[len])
{
grid[len] = 0;
len++;
}

return grid;
}
