#!/usr/bin/python3
'''returns the perimeter of the island described in'''


def island_perimeter(grid):
    '''RTFM'''
    width = len(grid[0])
    height = len(grid)
    sizu = 0
    zawaya = 0

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                sizu += 1
                if (w > 0 and grid[h][w - 1] == 1):
                    zawaya += 1
                if (h > 0 and grid[h - 1][w] == 1):
                    zawaya += 1
    return sizu * 4 - zawaya * 2
