
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


const int MENU_PRINT_CODE = 1;
const int MENU_TOTAL_CODE = 2;
const int MENU_AVERAGE_CODE = 3;
const int MENU_LARGEST_CODE = 4;
const int MENU_SMALLEST_CODE = 5;
const int MENU_NUM_OCCURENCES_CODE = 6;
const int MENU_SCALE_UP_CODE = 7;
const int MENU_REVERSE_CODE = 8;
const int MENU_ZERO_BASE_CODE = 9;
const int MENU_REMOVE_NUMBER_CODE = 10;
const int MENU_SORT_CODE = 11;
const int MENU_EXIT_CODE = 12;

void MenuChoices(int array[], int size);
void populateArray(int array[], int size);
void UserChoiceInput(int array[], int size);
void Display(int array[], int size);
void GetTotal(int array[], int size);
void GetAverage(int array[], int size);
void GetLargest(int array[], int size);
void GetSmallest(int array[], int size);
void GetNumOccurences(int array[], int size);
void ScaleUp(int array[], int size);
void Reverce(int array[], int size);
void ZeroBase(int array[], int size);
void RemoveNumber(int array[], int& size);
void Sort(int array[], int size);



void MenuChoices(int array[], int size)
{
	cout << "-----------------------------------------------------------------" << endl;
	cout << "select " << MENU_PRINT_CODE << " to Display the Numbers in the array" << endl;
	cout << "select " << MENU_TOTAL_CODE << " to Get the Total of the Numbers in the array" << endl;
	cout << "select " << MENU_AVERAGE_CODE << " to Get the Average of the Numbers in the array" << endl;
	cout << "select " << MENU_LARGEST_CODE << " to Get the Largest Number in the array" << endl;
	cout << "select " << MENU_SMALLEST_CODE << " to Get the Smallest Number in the array" << endl;
	cout << "select " << MENU_NUM_OCCURENCES_CODE << " to Get the Number of Occurrences of a Number in the array" << endl;
	cout << "select " << MENU_SCALE_UP_CODE << " to Scale Up the Numbers in the array by 1" << endl;
	cout << "select " << MENU_REVERSE_CODE << " to Reverse the Numbers in the array" << endl;
	cout << "select " << MENU_ZERO_BASE_CODE << " to Base the Numbers in the array by any number" << endl;
	cout << "select " << MENU_REMOVE_NUMBER_CODE << " to Remove a Number from the array" << endl;
	cout << "select " << MENU_SORT_CODE << " to Sort the Numbers in the array" << endl;
	cout << "select " << MENU_EXIT_CODE << " to Exit the program" << endl;
	cout << "----------------------------------------------------------------" << endl;
}


void populateArray(int array[], int size)
{
	ifstream inputFile("Numbers.dat");
	if (!inputFile)
	{
		cout << "Failed to open file." << endl;
		return;
	}

	else if (inputFile.peek() == ifstream::traits_type::eof())
	{
		cout << "The file is empty (Please enter at least 50 integers values)" << endl;
		exit(1);
		return;
	}


	for (int i = 0; i < size; i++)
	{
		string input;
		inputFile >> input;
		try
		{
			array[i] = stoi(input);
		}
		catch (const invalid_argument& e)
		{
			cout << "Invalid input. Please enter a number." << endl;
			i--;
		}
	}

	inputFile.close();
}

void UserChoiceInput(int array[], int size)
{
	int selectionCode;

	do
	{
		system("cls");
		MenuChoices(array, size);

		cout << "Enter your choice: ";
		cin >> selectionCode;

		switch (selectionCode)
		{
		case MENU_PRINT_CODE:
			Display(array, size);
			break;

		case 2:
			GetTotal(array, size);
			break;

		case 3:
			GetAverage(array, size);
			break;

		case 4:
			GetLargest(array, size);
			break;

		case 5:
			GetSmallest(array, size);
			break;

		case 6:
			GetNumOccurences(array, size);
			break;

		case 7:
			ScaleUp(array, size);
			break;

		case 8:
			Reverce(array, size);
			break;

		case 9:
			ZeroBase(array, size);
			break;

		case 10:
			RemoveNumber(array, size);
			break;

		case 11:
			Sort(array, size);
			break;

		case MENU_EXIT_CODE:
			cout << "Exiting the program" << endl;
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}
		cout << endl;
		system("pause");
	} while (selectionCode != MENU_EXIT_CODE);

}

void Display(int array[], int size)
{
	cout << "[";

	for (int i = 0; i < size && i < 1; i++)
		cout << array[i];
	for (int i = 1; i < size; i++)
		cout << ", " << array[i];

	cout << "]" << endl;
}

void GetTotal(int array[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += array[i];
	}
	cout << "The total of the array is: " << total << endl;
}

void GetAverage(int array[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += array[i];
	}
	cout << "The average of the array is: " << (double)total / size << endl;
}

void GetLargest(int array[], int size)
{
	int largestValue = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > largestValue)
		{
			largestValue = array[i];
		}
	}
	cout << "The largest number in the array is: " << largestValue << endl;
}

void GetSmallest(int array[], int size)
{
	int smallestValue = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] < smallestValue)
		{
			smallestValue = array[i];
		}
	}
	cout << "The smallest number in the array is: " << smallestValue << endl;
}

void GetNumOccurences(int array[], int size)
{
	int num;
	cout << "Enter the number you want to find: ";
	cin >> num;
	while (cin.fail())
	{
		cout << "Invalid input. Please enter a number." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter the number you want to find: ";
		cin >> num;
	}
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == num)
		{
			count++;
		}
	}
	cout << "The number " << num << " occurs " << count << " times in the array" << endl;
}

void ScaleUp(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] += 1;
	}
	cout << "The array has been scaled up by 1" << endl;
}

void Reverce(int array[], int size)
{
	int temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = temp;
	}
	cout << "The array has been reversed" << endl;
}

void ZeroBase(int array[], int size)
{
	int baseNumber;
	cout << "Enter the number you want to base the array by: ";
	cin >> baseNumber;

	for (int i = 0; i < size; i++)
	{
		array[i] -= baseNumber;
	}
	cout << "The array has been based by " << baseNumber << endl;
}

void RemoveNumber(int array[], int& size)
{
	int num;
	cout << "Enter the element number you want to remove: ";
	cin >> num;

	while (cin.fail())
	{
		cout << "Invalid input. Please enter a number." << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Enter the element number you want to remove: ";
		cin >> num;
	}

	if (num < 1 || num > size)
	{
		cout << "Invalid element number" << endl;
		return;
	}

	for (int i = num - 1; i < size - 1; i++)
	{
		array[i] = array[i + 1];
	}
	size--;

	cout << "The element at position " << num << " has been removed from the array" << endl;
}

void Sort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout << "The array has been sorted in ascending order" << endl;
}


int main()
{
	int array[50];
	int size = 50;

	populateArray(array, size);
	MenuChoices(array, size);
	UserChoiceInput(array, size);


	return 0;
}