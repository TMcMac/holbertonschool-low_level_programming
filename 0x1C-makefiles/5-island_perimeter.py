#!/usr/bin/python3
"""
A simple program to iterate through a 2d array that is 'map' with
0's for water and 1's for land, the program will return the perimeter
calculation of an island on the map
"""


def island_perimeter(grid):
    """
    Function to count perimeter of an island
    parameters: a 2d array
    """

    perimeter = 0
    rows = len(grid)
    columns = len(grid[0])

    for i in range(rows):
        for j in range(columns):
            if grid[i][j] == 1 and grid[i][j-1] != 1:
                """ If you are on land and land is not behind you """
                perimeter += 1
            if grid[i][j] == 1 and (grid[i-1][j] == 0 or i == 0):
                """ If you are on land and water or the edge IS above you """
                perimeter += 1
            if grid[i][j] == 1 and (i + 1) == rows:
                """ If you are on land and on the right edge of the map """
                perimeter += 1
            if grid[i][j] == 0 and grid[i][j-1] == 1:
                """ If you are on water but land IS behind you """
                perimeter += 1
            if grid[i][j] == 0 and (grid[i-1][j] == 1 and i != 0):
                """ If you are on water but land is above you """
                perimeter += 1

    return perimeter
