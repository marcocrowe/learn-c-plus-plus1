#include <iostream>

const int NUM_LABS = 5;
const int NUM_DAYS = 7;

int main() {
	int usage[NUM_LABS][NUM_DAYS];

	// Read in the number of students using each lab over the week
	for (int lab = 0; lab < NUM_LABS; lab++) {
		for (int day = 0; day < NUM_DAYS; day++) {
			std::cout << "Enter the number of students using Lab " << lab + 1 << " on Day " << day + 1 << ": ";
			std::cin >> usage[lab][day];
		}
	}

	// Calculate and present the average usage for each lab over the week
	for (int lab = 0; lab < NUM_LABS; lab++) {
		int totalUsage = 0;
		for (int day = 0; day < NUM_DAYS; day++) {
			totalUsage += usage[lab][day];
		}
		double averageUsage = static_cast<double>(totalUsage) / NUM_DAYS;
		std::cout << "Average usage for Lab " << lab + 1 << ": " << averageUsage << std::endl;
	}

	return 0;
}
