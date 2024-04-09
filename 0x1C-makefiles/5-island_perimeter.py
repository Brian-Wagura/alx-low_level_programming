#!/usr/bin/python3
"""
Island perimeter
"""


def island_perimeter(grid):
    """
    Island perimeter
    """
    width = []
    height = []
    perimeter = 0

    for x in range(len(grid)):
        w = 0
        for y in range(len(grid[0])):
            if grid[x][y] == 1:
                w = w + grid[x][y]
        width.append(w)

    for x in range(len(grid[0])):
        h = 0
        for y in range(len(grid)):
            if grid[y][x] == 1:
                h = h + grid[y][x]
        height.append(h)

    h = max(height)
    w = max(width)

    if h == 1 and w == 1:
        perimeter = 1
    else:
        if h == 1:
            perimeter = w
        elif w == 1:
            perimeter = h
        else:
            perimeter = 2 * (h + w)

    return perimeter
