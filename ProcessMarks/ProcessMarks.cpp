#include <string>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string knumbers[20];
	int marks[20];
	char grades[20];

	ifstream infile("kmarks.txt");

	for (int i = 0; i < 20; i++)
	{
		infile >> knumbers[i] >> marks[i];
	}

	infile.close();

	for (int i = 0; i < 20; i++)
	{
		if (marks[i] >= 85)
			grades[i] = 'A';

		else if (marks[i] >= 70)
			grades[i] = 'B';

		else if (marks[i] >= 60)
			grades[i] = 'C';

		else if (marks[i] >= 50)
			grades[i] = 'D';

		else if (marks[i] >= 40)
			grades[i] = 'E';

		else
			grades[i] = 'F';
	}

	ofstream outfile("grades.txt");

	for (int i = 0; i < 20; i++)
	{
		outfile << grades[i] << endl;
	}

	outfile.close();

	return 0;
}
