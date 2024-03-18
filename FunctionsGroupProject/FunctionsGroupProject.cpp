
#include <iostream>
using namespace std;


void MenuSystem()
{
	cout << "---------------------------------------------------" << endl;
	cout << "1. Display the Numbers in the array               |" << endl;
	cout << "2. get total of the array                         |" << endl;
	cout << "3. Get the Average of the array                   |" << endl;
	cout << "4. Get the Largest number in the array            |" << endl;
	cout << "5. Get the Smallest number in the array           |" << endl;
	cout << "6. Scale up by one                                |" << endl;
	cout << "7. reverse the array                              |" << endl;
	cout << "8. Zero Base                                      |" << endl;
	cout << "9. remove a number form the array                 |" << endl;
	cout << "10. sort the array form ascending order           |" << endl;
	cout << "11. Exit                                          |" << endl;
	cout << "---------------------------------------------------" << endl;
}



int main()
{
	int populateArray[50];
	cout << "Enter 50 numbers to populate the array: " << endl;
	for (int i = 0; i < 50; i++)
	{
		cin >> populateArray[i];
	}

	MenuSystem();

}

