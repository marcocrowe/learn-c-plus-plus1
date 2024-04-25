#include <iostream>
#include <fstream>

using namespace std;

int main() {

	ifstream inputFile("Weight.txt");
	if (!inputFile)
	{
		cout << "Failed to open file." << endl;
		return 1;
	}

	double weight;
	double postageCost;
	int stampsNeeded;

	while (inputFile >> weight) {
		if (weight >= 0 && weight <= 5) {
			postageCost = 3.00;
			stampsNeeded = 1;
		}
		else if (weight > 5 && weight <= 10) {
			postageCost = 6.00;
			stampsNeeded = 2;
		}
		else if (weight > 10 && weight <= 15) {
			postageCost = 9.00;
			stampsNeeded = 3;
		}
		else if (weight > 15 && weight <= 20) {
			postageCost = 12.00;
			stampsNeeded = 4;
		}
		else {
			cout << "Invalid weight: " << weight << endl;
			continue;
		}

		cout << "Parcel weight:" << weight << " KG " << endl;
		cout << "Postage cost:" << postageCost << " Euro" << endl;
		cout << "Stamps needed:" << stampsNeeded << endl;
		cout << "---------------------------------------------------\n";
	}

	inputFile.close();

	return 0;
}
