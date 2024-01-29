#include <iostream>
using namespace std;

const int UNASSIGNED = 0;
const int N = 9;

bool SolveSudoku(int grid[N][N]);
bool FindUnassignedLocation(int grid[N][N], int& row, int& col);
bool UsedInRow(int grid[N][N], int row, int num);
bool UsedInCol(int grid[N][N], int col, int num);
bool UsedInBox(int grid[N][N], int boxStartRow, int boxStartCol, int num);
bool isSafe(int grid[N][N], int row, int col, int num);
void printGrid(int grid[N][N]);