
#include <iostream>
#include <fstream>
using namespace std;


int main()
{

	//declare variables
	int grid[3][3];
	int smallestValue;

	//open file
	ifstream inFile("Grid.txt");

	//read data from input file into 2D array
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			inFile >> grid[row][col];
		}
	}


	//display the original grid data

	cout << "Original grid data: " << endl;
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << grid[row][col] << " ";
		}
		cout << endl;
	}

	//find the smallest value in the grid

	smallestValue = grid[0][0];
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			if (grid[row][col] > smallestValue)
			{
				smallestValue = grid[row][col];

				cout << "\nThe smallest value in the grid is: " << smallestValue << endl;
			}

			//reduce each value in the grid by the smallest value

			for (int row = 0; row < 3; row++)
			{
				for (int col = 0; col < 3; col++)
				{
					grid[row][col] -= smallestValue;
				}
			}


			//update the grid data file to show updated data

			ofstream outFile("Grid.txt");
			for (int row = 0; row < 3; row++)
			{
				for (int col = 0; col < 3; col++)
				{
					outFile << grid[row][col] << " ";
				}
				outFile << endl;
			}


			// add 5 to each value in the grid

			for (int row = 0; row < 3; row++)
			{
				for (int col = 0; col < 3; col++)
				{
					grid[row][col] += 5;
				}
			}

			//display the updated grid data

			cout << "\nUpdated grid data: " << endl;
			for (int row = 0; row < 3; row++)
			{
				for (int col = 0; col < 3; col++)
				{
					cout << grid[row][col] << " ";
				}
				cout << endl;
			}

			return 0;
		}
	}
}