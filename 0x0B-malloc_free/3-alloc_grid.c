#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: return grid
 */
int **alloc_grid(int width, int height)
{
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (!grid)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		grid[i] = (int *)calloc(width, sizeof(int));
		if (!grid[i])
		{
			while (i--)
			{
				free(grid[i]);
			}
		free(grid);
		return (NULL);
		}
	}
	return (grid);
}
