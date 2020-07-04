#!/usr/bin/python3
"""5-island_perimeter"""


def island_perimeter(grid):
    """island_perimeter function

    Args:
        grid ([list]): [list of list of integers]

    Returns:
        [int]: [Grid perimeter]
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2

                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
