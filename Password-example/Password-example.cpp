#include <iostream>
#include <string>

using namespace std;

void checkpassword()
{
	string password;
	int attempts = 0;

	while (attempts < 10)
	{
		cout << "Enter the password: ";
		cin >> password;

		if (password == "10092004")
		{
			cout << "Access granted" << endl;
			return;
		}
		else
		{
			attempts++;
			cout << "Access denied" << endl;
		}
	}

	cout << "You have exceeded the maximum number of attempts. You are locked out." << endl;
}

int main()
{
	checkpassword();
	return 0;
}
