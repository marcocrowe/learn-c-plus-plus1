
#include <iostream>
using namespace std;


double sumOFCols(int arr[3][4], int col)
{
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		sum += arr[i][col];
	}
	return sum;
}


int main()
{

}

