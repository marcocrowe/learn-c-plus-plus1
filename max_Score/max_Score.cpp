
#include <fstream>
#include <iostream>
using namespace std;

void max_Score(int scores[])
{
	ifstream inFile("score.txt");

	int max = scores[0];
	for (int i = 1; i < 5; i++)
	{
		if (scores[i] > max)
			max = scores[i];
	}
	cout << "The highest score is: " << max << endl;

}


int main()
{

	int scores[5] = { 0,0,0,0,0 };
	max_Score(scores);
	return 0;

}


