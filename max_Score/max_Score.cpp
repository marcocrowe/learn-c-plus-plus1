#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int MaxScore(const string& filename);

int MaxScore(const string& filename)
{
	int currentScore;
	int maxScore = -1;

	ifstream file(filename);

	if (!file)
	{
		cerr << "Error opening file" << endl;
		return -1;
	}

	while (file >> currentScore)
	{
		if (currentScore > maxScore)
		{
			maxScore = currentScore;
		}
	}

	file.close();
	return maxScore;
}

int main()
{
	const string filename = "scores.txt"; // File with the scores
	int highestScore = MaxScore(filename);

	if (highestScore != -1)
	{
		cout << "The maximum score in the file is: " << highestScore << endl;
	}

	return 0;
}
