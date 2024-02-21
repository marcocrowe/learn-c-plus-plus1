// LearnMatrices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main() {
	int matrix[5][5]; // Declare a 5x5 array

	// Input values
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "\nEnter an integer for row " << i << " column " << j << ": ";
			cin >> matrix[i][j];
		}
	}

	// Print the matrix
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

