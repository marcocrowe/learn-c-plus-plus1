
#include <iostream>
using namespace std;

double TimeInSeconds(int hh, int mm, int ss);


double TimeInSeconds(int hh, int mm, int ss) {


	double TimeInSeconds = hh * 3600 + mm * 60 + ss;

	return TimeInSeconds;

}
	int main()
	{


		int hh;
		cout << "Enter the amount of hours: ";
		cin >> hh;

			int mm;
		cout << "Enter the amount of minutes: ";
			cin >> mm;

			int ss;
		cout << "Enter the amount of seconds: ";
			cin >> ss;


			cout << "the total time in seconds is " << TimeInSeconds(hh, mm, ss);

		return 0;
	}


