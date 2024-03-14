#include <iostream>
#include <fstream>
using namespace std;

const int NUM_LABS = 5;
const int NUM_DAYS = 7;

int main() {
	int usage[NUM_LABS][NUM_DAYS];

	ifstream file;
	file.open("values.txt"); //name of the file with data

	// Read in the number of students using each lab over the week
	for (int lab = 0; lab < NUM_LABS; lab++) {
		for (int day = 0; day < NUM_DAYS; day++) {
			// Read the value from the file and store it in the usage array
			file >> usage[lab][day];
		}
	}

	// Close the file
	file.close();

	// Calculate and present the average usage for each lab over the week
	for (int lab = 0; lab < NUM_LABS; lab++) {
		int totalUsage = 0;
		for (int day = 0; day < NUM_DAYS; day++) {
			totalUsage += usage[lab][day];
		}
		double averageUsage = static_cast<double>(totalUsage) / NUM_DAYS;
		cout << "Average usage for Lab " << lab + 1 << ": " << averageUsage << endl;
	}

	return 0;
}
