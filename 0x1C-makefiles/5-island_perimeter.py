#!/usr/bin/python3
"""Module for island_perimeter"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in <grid>"""
    p = 0
    for r in range(len(grid)):
        for c in range(len(grid[0])):
            if grid[r][c] == 1:
                p += 0 if grid[r-1][c] == 1 else 1
                p += 0 if grid[r][c+1] == 1 else 1
                p += 0 if grid[r+1][c] == 1 else 1
                p += 0 if grid[r][c-1] == 1 else 1
    return p
