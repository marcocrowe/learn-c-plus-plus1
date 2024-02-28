#include <iostream>
using namespace std;

void FillList(int marks[], int size);

int getMaximum(int marks[], int size);

void DoublePositiveValues(int values[], int size);


void FillList(int marks[], int size) {

	for (int i = 0; i < size; i++) {
		cout << "\n enter grade: " << i + 1 << " of " << size << ":" << "\n";
		cin >> marks[i];
	}
}

int getMaximum(int marks[], int size) {
	int max = marks[0];

	for (int i = 1; i < size; i++)
	{
		if (marks[i > max]);
		max = marks[i];
	}
	return max;
}

void DoublePositiveValues(int values[], int size) {
	for (int i = 0; i < size; i++)
	{
		if (values[i] > 0)
			values[i] = values[i] * 2;
	}
}



int main() {

	int marks[4];

	FillList(marks, 4);
	for (int i = 0; i < 4; i++)
		cout << marks[i] << endl;

	int max = getMaximum(marks, 4);

	cout << "The maximum value is: " << max << endl;

	DoublePositiveValues(marks, 4);

	cout << "The revised values are: " << endl;

	for (int i = 0; i < 5; i++)

		cout << marks[i] << endl;

	return 0;

}



