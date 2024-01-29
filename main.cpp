#include <iostream>
#include "sudoku.h"
using namespace std;

int main()
{
    int grid[N][N] = {{0, 0, 0, 0, 4, 9, 8, 0, 0},
                     {7, 0, 4, 6, 0, 0, 0, 0, 0},
                     {6, 0, 9, 0, 2, 0, 0, 3, 0},
                     {9, 5, 0, 0, 0, 6, 0, 0, 3},
                     {0, 0, 7, 5, 3, 1, 9, 0, 0},
                     {2, 3, 0, 7, 0, 0, 0, 1, 5},
                     {0, 0, 0, 0, 0, 0, 3, 8, 9},
                     {0, 4, 3, 0, 0, 0, 1, 7, 0},
                     {1, 0, 0, 0, 0, 0, 0, 0, 0}};

    cout << "Given Sudoku:\n\n" ;
    printGrid(grid);

    if (SolveSudoku(grid) == true)
    {
        cout << "\nThe solution is as follows:\n\n";
        printGrid(grid);
    }
    else
    {
        cout << "\nSorry, no solution exists.";
    }

    return 0;
    
}

