#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * alloc_grid - Allocates memory for a 2 dimensional array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: A pointer to the allocated grid or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int i, j;
    int **grid;

    if (width <= 0 || height <= 0)
        return (NULL);
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return (NULL);
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }
    return (grid);
}
