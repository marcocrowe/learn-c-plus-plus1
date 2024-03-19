#include <iostream>
using namespace std;

void MenuChoices(int array[], int size);
void populateArray(int array[], int size);
void UserChoiceInput(int array[], int size);
void DisplayArray(int array[], int size);
void TotalArray(int array[], int size);


void MenuChoices(int array[], int size)
{
	cout << "--------------------------------------------------" << endl;
	cout << "select 1 to Display the Numbers in the array      |" << endl;
	cout << "select 2 to get total of the array                |" << endl;
	cout << "select 3 to Get the Average of the array          |" << endl;
	cout << "select 4 to Get the Largest number in the array   |" << endl;
	cout << "select 5 to Get the Smallest number in the array  |" << endl;
	cout << "select 6 to Scale up by one                       |" << endl;
	cout << "select 7 to reverse the array                     |" << endl;
	cout << "select 8 to Zero Base                             |" << endl;
	cout << "select 9 to remove a number form the array        |" << endl;
	cout << "select 1 to sort the array form ascending order   |" << endl;
	cout << "select 1 to Exit                                  |" << endl;
	cout << "--------------------------------------------------" << endl;
}

void populateArray(int array[], int size)
{
	cout << "Enter 5 numbers to populate the array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}


void UserChoiceInput(int array[], int size)
{
	int Menu;
	cout << "Enter your choice: ";
	cin >> Menu;

	switch (Menu)
	{
	case 1:
		DisplayArray(array, size);
		break;

	case 2:
		TotalArray(array, size);
		break;

	case 3:

		break;

	case 4:

		break;

	case 5:

		break;


	case 6:

		break;

	case 7:

		break;

	case 8:

		break;

	case 9:

		break;

	case 10:

		break;

	case 11:

		exit(0);

		break;

	default:
		cout << "Invalid choice" << endl;
		break;
	}
}

void DisplayArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}


void TotalArray(int array[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += array[i];
	}
	cout << "The total of the array is: " << total << endl;
}








int main()
{
	int array[5];
	int size = 5;

	populateArray(array, size);
	MenuChoices(array, size);
	UserChoiceInput(array, size);

	return 0;
}
