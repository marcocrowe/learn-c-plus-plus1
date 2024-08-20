
#include <iostream>
#include <fstream>
using namespace std;

const int ROWS = 100;
const int COLS = 100;

void loadFromFile(int grid[][COLS], int rows, int cols);
int findSmallestValue(int grid[][COLS], int rows, int cols);
void adjustValuesBy(int grid[][COLS], int rows, int cols, int value);
void displayArray(int grid[][COLS], int rows, int cols);


int main()
{
    int grid[ROWS][COLS];

    loadFromFile(grid, ROWS, COLS);

    displayArray(grid, ROWS, COLS);

    int smallestValue = findSmallestValue(grid, ROWS, COLS);

    adjustValuesBy(grid, ROWS, COLS, smallestValue);

    displayArray(grid, ROWS, COLS);
}


void loadFromFile(int grid[][COLS], int rows, int cols)
{
    ifstream inputFile("height.dat");

    if (!inputFile)
    {
        cout << "Error opening file\n";
        return;
    }

    for (int rowIndex = 0; rowIndex < rows; rowIndex++)
        for (int colIndex = 0; colIndex < cols; colIndex++)
            inputFile >> grid[rowIndex][colIndex];

    inputFile.close();
}

void displayArray(int grid[][COLS], int rows, int cols)
{
    for (int rowIndex = 0; rowIndex < rows; rowIndex++)
    {
        for (int colIndex = 0; colIndex < cols; colIndex++)
            cout << grid[rowIndex][colIndex] << " ";
        cout << endl;
    }
}

int findSmallestValue(int grid[][COLS], int rows, int cols)
{
    int smallestValue = grid[0][0];

    for (int rowIndex = 0; rowIndex < rows; rowIndex++)
        for (int colIndex = 0; colIndex < cols; colIndex++)
            if (grid[rowIndex][colIndex] < smallestValue)
                smallestValue = grid[rowIndex][colIndex];

    return smallestValue;
}


int findSmallestValue(int grid[][COLS], int rows, int cols)
{
    int smallestValue = grid[0][0];

    for (int rowIndex = 0; rowIndex < rows; rowIndex++)
        for (int colIndex = 0; colIndex < cols; colIndex++)
            if (grid[rowIndex][colIndex] < smallestValue)
                smallestValue = grid[rowIndex][colIndex];

    return smallestValue;
}


void adjustValuesBy(int grid[][COLS], int rows, int cols, int value)
{
    for (int rowIndex = 0; rowIndex < rows; rowIndex++)
        for (int colIndex = 0; colIndex < cols; colIndex++)
                grid[rowIndex][colIndex] =- value;
}

