#include <iomanip>
#include <iostream>
using namespace std;

const int ROWS = 50;
const int COLS = 20;

const double EQUAL_PERCENTAGE_RATE = 95.0;

void readFromFile(int bitMap[][COLS], int rows, int cols, string fileName);
bool areBitmapsEqual(int bitMap1[][COLS], int bitMap2[][COLS], int rows, int cols);

int main() {

    int bitMap1[ROWS][COLS] ;
    int bitMap2[ROWS][COLS] ;

    readFromFile(bitMap1, ROWS, COLS, "bitmap1.dat");
    readFromFile(bitMap2, ROWS, COLS, "bitmap2.dat");

    bool isEqual = areBitmapsEqual(bitMap1, bitMap2, ROWS, COLS);

    if (isEqual)
        cout << "The bitmaps are equal\n";
    else
        cout << "The bitmaps are not equal\n";

	return 0;
}

bool areBitmapsEqual(int bitMap1[][COLS], int bitMap2[][COLS], int rows, int cols)
{
    int equalCount = 0;
    for (int rowIndex = 0; rowIndex < rows; rowIndex++)
    {
        for (int colIndex = 0; colIndex < cols; colIndex++)
        {
            if (bitMap1[rowIndex][colIndex] == bitMap2[rowIndex][colIndex])
                equalCount++;
        }
    }
    int totalElements = rows * cols;
    double equalPercentage = ((double) equalCount / totalElements) * 100;
    return equalPercentage >= EQUAL_PERCENTAGE_RATE;
}

