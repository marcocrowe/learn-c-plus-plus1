#include <iostream>
#include <string>

using namespace std;

void checkpassword()
{


	string password;
	cout << "Enter the password: ";
	cin >> password;
	if (password == "10092004")
	{
		cout << "Access granted" << endl;
	}
	else
	{
		cout << "Access denied" << endl;
	}

	else
	{
		if (!password)


	}
}



int main()
{
	checkpassword();
	return 0;
}
