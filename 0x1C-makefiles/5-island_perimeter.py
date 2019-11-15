#!/usr/bin/python3
def island_perimeter(grid):
    '''Returns the perimeter of island in grid.'''
    rows = (len(grid))
    items = (len(grid[0]))
    perimeter = 0

    for i in range(rows):
        for j in range(items):
            if grid[i][j] == 1:
                try:
                    if grid[i - 1][j] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                    pass
                try:
                    if grid[i][j + 1] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                    pass
                try:
                    if grid[i + 1][j] == 0:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                    pass
                try:
                    if grid[i][j - 1] == 0 or j - 1 == -1:
                        perimeter += 1
                except IndexError:
                    perimeter += 1
                    pass
    return(perimeter)
