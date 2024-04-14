#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void printTable()
{

	cout << "Car Model\tMeaning" << endl;
	cout << "1\t\tSedan" << endl;
	cout << "2\t\tSUV" << endl;
	cout << "3\t\tTruck" << endl;
	cout << "4\t\tSports Car" << endl;
}

int main()
{
	vector<vector<int>> sales(5, vector<int>(4));
	int salesperson;
	int carmodel;
	int carsold;

	ifstream infile("sales.dat");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			infile >> sales[i][j];
		}
	}
	infile.close();

	do
	{
		cout << "Enter the salesperson number (1-5) (-1 to exit): ";
		cin >> salesperson;
	} while (salesperson < 1 || salesperson > 5);

	do
	{
		cout << "Enter the car model number (1-4) (-1 to exit): ";
		cin >> carmodel;
	} while (carmodel < 1 || carmodel > 4);

	if (carmodel == -1)
	{
		printTable();
		return 0;
	}

	do
	{
		cout << "Enter the number of cars sold (-1 to exit): ";
		cin >> carsold;
	} while (carsold < 0);

	if (salesperson == -1)
	{
		return 0;
	}

	sales[salesperson - 1][carmodel - 1] += carsold;

	ofstream outfile("sales.dat");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			outfile << sales[i][j] << " ";
		}
		outfile << endl;
	}
	outfile.close();

	return 0;
}