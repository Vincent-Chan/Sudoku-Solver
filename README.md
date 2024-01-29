# Sudoku Solver

This is a sudoku solver in C++. The solver uses backtracking.

---

## How to run?

1. Put all the .cpp files and .h files in the same directoyr.
2. Open your VS Code terminal. Type `g++ -o main *.cpp` to compile all the files.
3. Type `./main.exe` to run the executable file.
4. You should see the sudoku problem and also the solution (if the solution exist); otherwise, it will say that no solutions exists.

---

**Sample given sudoku problem:**

*(Note: The cells that does not have any numbers filled in are represented as 0)*

```
0 0 0 0 4 9 8 0 0
7 0 4 6 0 0 0 0 0
6 0 9 0 2 0 0 3 0
9 5 0 0 0 6 0 0 3
0 0 7 5 3 1 9 0 0
2 3 0 7 0 0 0 1 5 
0 0 0 0 0 0 3 8 9
0 4 3 0 0 0 1 7 0
1 0 0 0 0 0 0 0 0
```

**Sample corresponding solution:**

```
3 2 5 1 4 9 8 6 7
7 8 4 6 5 3 2 9 1 
6 1 9 8 2 7 5 3 4
9 5 1 2 8 6 7 4 3 
4 6 7 5 3 1 9 2 8
2 3 8 7 9 4 6 1 5
5 7 6 4 1 2 3 8 9
8 4 3 9 6 5 1 7 2
1 9 2 3 7 8 4 5 6
```