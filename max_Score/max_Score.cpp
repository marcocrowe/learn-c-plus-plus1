#include <fstream>
#include <iostream>
using namespace std;

int MaxScore(const char* filename);

int MaxScore(const char* filename)
{
	int currentScore;
	int maxScore = -1;

	ifstream file(filename); // Open the file for reading

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

	file.close(); // Close the file
	return maxScore;
}

int main()
{
	const char* filename = "scores.txt"; // The File with the scores
	int highestScore = MaxScore(filename);

	if (highestScore != -1)
	{
		cout << "The maximum score in the file is: " << highestScore << endl;
	}

	return 0;
}
