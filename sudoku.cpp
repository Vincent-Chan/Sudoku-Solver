#include "sudoku.h"

bool SolveSudoku(int grid[N][N])
{
    int row, col;

    if(FindUnassignedLocation(grid, row, col) == false)
    {
        return true;
    }

    for (int num = 1; num <= 9; ++num)
    {
        if (isSafe(grid, row, col, num) == true)
        {
            grid[row][col] = num;

            if (SolveSudoku(grid) == true)
            {
                return true;
            }

            grid[row][col] = UNASSIGNED;
        }
    }

    return false;
}

bool FindUnassignedLocation(int grid[N][N], int& row, int& col)
{
    for (row = 0; row < N; ++row)
    {
        for (col = 0; col < N; ++col)
        {
            if(grid[row][col] == UNASSIGNED)
            {
                return true;
            }
        }
    }

    return false;
}

bool UsedInRow(int grid[N][N], int row, int num)
{
    for (int col = 0; col < N; ++col)
    {
        if (grid[row][col] == num)
        {
            return true;
        }
    }

    return false;
}

bool UsedInCol(int grid[N][N], int col, int num)
{
    for (int row = 0; row < N; ++row)
    {
        if (grid[row][col] == num)
        {
            return true;
        }
    }

    return false;
}

bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num)
{
    for (int row = 0; row < 3; ++row)
    {
        for (int col = 0; col < 3; ++col)
        {
            if (grid[row + boxStartRow][col + boxStartCol] == num)
            {
                return true;
            }
        }
    }

    return false;
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
    return (UsedInRow(grid, row, num) == false) &&
           (UsedInCol(grid, col, num) == false) &&
           (UsedInBox(grid, row - row % 3, col - col % 3, num) == false) &&
           (grid[row][col] == UNASSIGNED);
}

void printGrid(int grid[N][N])
{
    for (int row = 0; row < N; ++row)
    {
        for (int col = 0; col < N; ++col)
        {
            cout << grid[row][col] << " ";
        }

        cout << endl;
    }
}