#!/usr/bin/python3
"""
a function that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):

    """
    Calculate the perimeter of the island described in the grid.

    Args:
    - grid (list of list of int): A rectangular grid representing the island,
      where 0 represents water zones and 1 represents land zones.

    Returns:
    - int: The perimeter of the island.

    Requirements:
    - The grid is completely surrounded by water.
    - There is one island (or nothing).
    - The island doesn’t have “lakes” (water inside that isn’t connected to
    the water around the island).
    - Grid cells are connected horizontally/vertically (not diagonally).
    - One cell is a square with side length 1.
    - Grid is rectangular, width and height don’t exceed 100.

    Examples:
    >>> grid = [
    ...     [0, 0, 0, 0, 0, 0],
    ...     [0, 1, 0, 0, 0, 0],
    ...     [0, 1, 0, 0, 0, 0],
    ...     [0, 1, 1, 1, 0, 0],
    ...     [0, 0, 0, 0, 0, 0]
    ... ]
    >>> island_perimeter(grid)
    12
    """
    parameter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                parameter += 4
                if i > 0 and grid[i-1][j] == 1:
                    parameter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    parameter -= 2
    return parameter
