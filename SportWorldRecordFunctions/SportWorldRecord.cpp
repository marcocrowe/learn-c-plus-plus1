// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>;
using namespace std;

bool isNewRecordScore(double distance, double score);

int main() {

	double  recordScore;
	cout << "Enter the curent world 100m Sprint record \n";
	cin >> recordScore;

	double score;
	cout << "Enter your score\n";
	cin >> score;

	bool isNewRecord = isNewRecordScore(recordScore, score);

	if (isNewRecord) {

		cout << "you now hold the new record";
	}

	else {
		cout << ("you did not beat the record");
	}

}

bool isNewRecordScore(double recordScore, double score) {

	return (recordScore < score);
}