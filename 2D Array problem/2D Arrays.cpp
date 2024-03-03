#include <iomanip>
#include <iostream>
using namespace std;

void SumOfCols(int M[][4], int rows, int cols);


void SumOfCols(int M[][4], int rows, int cols)
{
	cout << "Column\t    Sum of Column Entries\n";

	for (int col = 0; col < cols; ++col)
	{
		int sumOfCol = 0;

		for (int row = 0; row < rows; ++row)
		{
			sumOfCol += M[row][col];
		}
		cout << "   " << left << setw(16) << col + 1 << sumOfCol << endl;

	}
}

int main() {

	int M[3][4] = { {2,5,4,7},
					{3,1,2,9},
					{4,6,3,0}
	};
	int rows = 3;
	int cols = 4;

	SumOfCols(M, rows, cols);

	return 0;
}