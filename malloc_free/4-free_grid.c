#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point of the program
 *
 * @grid: function that frees a 2 dimensional grid
 * @height: previously created by your alloc_grid function
 *
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
int i;

if (grid == NULL || height <= 0)
{
return ();
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
