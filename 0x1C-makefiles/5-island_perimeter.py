#!/usr/bin/python3


def island_perimeter(grid):
    """Python function to return the perimeter of an island"""

    p = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if i + 1 == len(grid) or grid[i+1][j] == 0:
                    p += 1
                if j + 1 == len(grid[0]) or grid[i][j + 1] == 0:
                    p += 1
                if i - 1 == -1 or grid[i - 1][j] == 0:
                    p += 1
                if j - 1 == -1 or grid[i][j - 1] == 0:
                    p += 1
    return (p)
