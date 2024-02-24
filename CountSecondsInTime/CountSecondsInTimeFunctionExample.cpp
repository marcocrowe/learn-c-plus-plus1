// CountSecondsInTime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

Double TimeInSeconds(int hh. int mm, int ss);

int main()
{
 
	Double TimeInSeconds;
	int hh;
	cout << "Enter the amount of hours"
		cin >> hh

	int mm;
	cout << "Enter the amount of minutes"
		cin >> mm

	int ss;
	cout << "Enter the amount of seconds"
		cin >> ss


		int TotalTimeInSeconds =  TimeInSeconds(int hh. int mm, int ss);

		cout << "the total time in seconds is" << TotalTimeInSeconds << endl;
}


Double TimeInSeconds(int hh. int mm, int ss) {

	

	TimeInSeconds = hh * 3600 + mm * 60 + ss;	

}
