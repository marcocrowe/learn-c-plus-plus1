#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void checkfile(ifstream& file);
void checkfile(ifstream& file)
{
	if (!file)
	{
		cout << "Error: file could not be opened" << endl;
		exit(1);
	}
}

void EnterPassword(string& password);
void EnterPassword(string& password)
{
	cout << "Enter your password to be saved to your account: ";
	cin >> password;
	cout << "Thank you for adding your password." << endl;
}

void SavePassword(string password);
void SavePassword(string password)
{
	ofstream file;
	file.open("passwords.txt");
	file << password;
	file.close();
}

void CheckPassword(string password);
void CheckPassword(string password)
{
	string password2;
	ifstream file;

	file.open("passwords.txt");
	checkfile(file);
	file >> password2;
	file.close();

	if (password == password2)
	{
		cout << "Password is Entered " << endl;
	}
	else
	{
		cout << "Password is incorrect" << endl;
	}
	cout << "Thank you for adding your password. Please enter it again to confirm: ";
	cin >> password;
	if (password == password2)
	{
		cout << "Password confirmed" << endl;
	}
	else
	{
		cout << "Password does not match" << endl;
	}
}

int main()
{
	string password;
	EnterPassword(password);
	SavePassword(password);
	CheckPassword(password);
	return 0;
}