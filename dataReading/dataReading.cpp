#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{

	double prices[12], cost;
	int itemNumber, numItems;

	//open up the file pricelist.dat for input
	ifstream infile("pricelist.dat");

	//open up the file output.dat for output
	ofstream outfile("output.dat");

	cout << " Initialize price list for 12 items\n";

	for (int i = 0; i < 12; i++)
	{
		infile >> prices[i];//populating prices array from file “pricelist.dat”
	}


	for (int i = 0; i < 12; i++)
	{
		outfile << prices[i] << endl; //output the content of the prices array
	}						//to the file “output.dat”

	cout << " Process Order\n";
	cout << " Enter item number from 1 to 12 : ";

	cin >> itemNumber;

	cout << " Enter number of items purchased : ";
	cin >> numItems;

	cost = numItems * prices[itemNumber - 1];

	cout << "Total cost is " << setprecision(2) << fixed << cost << endl;

}//end main
