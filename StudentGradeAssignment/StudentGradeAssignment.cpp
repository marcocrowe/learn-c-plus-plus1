// StudentGradeAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void FillList(char grades[], int size);
char GetLowestGrade(char grades[], int size);
void UpGradesByOne(char grades[], int size);

int main()
{
	char grades[5] = { 'D','A','F','C', 'F' };


	for (int index = 0; index < 5; index++)
		cout << grades[index] << endl;

	char lowest = GetLowestGrade(grades, 5);

	cout << endl << lowest << " is the lowest grade \n" << endl;

	UpGradesByOne(grades, 5);

	cout << "\nrevised grades are: " << endl;

	for (int index = 0; index < 5; index++)
		cout << grades[index] << endl;

	return 0;
}

void FillList(char grades[], int size) {
	// write function definition here to populate the array
	// with five character values (capital letters only)

	for (int index = 0; index < size; index++) {
		cout << "\n Please enter grade # " << index + 1 << " of " << size;
		cin >> grades[index];
	}
}

/// <summary>
/// This function takes an array of Grades (A-F) and returns the lowest grade
/// </summary>
/// <param name="grades"></param>
/// <param name="size"></param>
/// <returns></returns>
char GetLowestGrade(char grades[], int size) {
	char minGrade = grades[0];

	// write function definition here to return the lowest
	// grade in the array (Note: F is Lower than A)
	for (int index = 1; index < size; index++)
	{
		if (grades[index] > minGrade) // By alphabet rules B is greater than A hence >
			minGrade = grades[index];
	}
	return minGrade;
}

void UpGradesByOne(char grades[], int size) {
	for (int index = 0; index < size; index++)
	{
		if (grades[index] == 'A' || grades[index] == 'a')
			grades[index]--;// By alphabet rules B is greater than A hence --
	}
}