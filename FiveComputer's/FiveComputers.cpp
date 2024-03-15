#include <iostream>
#include <fstream>
using namespace std;

const int NUM_LABS = 5;
const int NUM_DAYS = 7;

int main()
{
	int usage[NUM_LABS][NUM_DAYS];

	ifstream file;
	file.open("values.txt");

	for (int lab = 0; lab < NUM_LABS; lab++)
	{
		for (int day = 0; day < NUM_DAYS; day++)
		{
			file >> usage[lab][day];
		}
	}
	file.close();

	int totalUsage[NUM_LABS] = { 0, 0, 0, 0, 0 };

	for (int lab = 0; lab < NUM_LABS; lab++)
	{
		for (int day = 0; day < NUM_DAYS; day++)
		{
			totalUsage[lab] += usage[lab][day];
		}
	}

	double averageUsage[NUM_LABS];

	for (int lab = 0; lab < NUM_LABS; lab++)
	{
		double sum = 0;
		for (int day = 0; day < NUM_DAYS; day++)
		{
			sum += usage[lab][day];
		}
		averageUsage[lab] = sum / NUM_DAYS;
	}

	for (int lab = 0; lab < NUM_LABS; lab++)
	{
		cout << "Lab " << lab + 1 << " average usage: " << averageUsage[lab] << endl;
	}

	return 0;
}