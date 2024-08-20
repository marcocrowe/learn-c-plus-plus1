// StudentMarkFileToGrade.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int NUMBER_OF_STUDENTS = 5;

const string FILE_NAME = "marks.dat";

char calculateGrade(int mark);

void readFromFile(std::string studentKNumbers[5], int studentMarks[5]);

void saveGrades(std::string studentKNumbers[5], char studentGrades[5]);

int main()
{
    string studentKNumbers[NUMBER_OF_STUDENTS];
    int studentMarks[NUMBER_OF_STUDENTS];
    char studentGrades[NUMBER_OF_STUDENTS];

    readFromFile(studentKNumbers, studentMarks);

    for (int index = 0; index < NUMBER_OF_STUDENTS; index++)
        studentGrades[index] = calculateGrade(studentMarks[index]);

    for (int index = 0; index < NUMBER_OF_STUDENTS; index++)
        cout << studentKNumbers[index] << " " << studentMarks[index] << " " << studentGrades[index] << endl;

    saveGrades(studentKNumbers, studentGrades);

    std::cout << "Hello World!\n";
}

void readFromFile(std::string studentKNumbers[5], int studentMarks[5])
{
    ifstream infile(FILE_NAME);

    for (int index = 0; index < NUMBER_OF_STUDENTS; index++)
        infile >> studentKNumbers[index] >> studentMarks[index];
}

void saveGrades(string studentKNumbers[NUMBER_OF_STUDENTS], char studentGrades[NUMBER_OF_STUDENTS])
{
    ofstream outfile("grades.dat");

    for (int index = 0; index < NUMBER_OF_STUDENTS; index++)
        outfile << studentKNumbers[index] << " " << studentGrades[index] << endl;
}

char calculateGrade(int mark)
{
    if (mark >= 85)
        return 'A';
    if (mark >= 70)
        return 'B';
    if (mark >= 60)
        return 'C';
    if (mark >= 50)
        return 'D';
    if (mark >= 40)
        return 'E';
    return 'F';
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
