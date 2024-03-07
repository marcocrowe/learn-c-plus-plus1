// CStringStuff.cpp


#include <string>
#include <iostream>
using namespace std;

int main(int argc, char argv[])
{



	char greetings[] = "Hello";                     //initialized C-string

	char name1[21];                                 //un-initialized C-string

	char name2[21];



	cout << greetings << endl;                      // display C-string



	cout << "Whats your name :";

	cin >> name1;                                   // fill a C-string from input



	cout << "Whats your name again :";

	cin >> name2;



	if (strcmp(name1, name2) == 0)                  // compare two C-strings

		cout << greetings << " " << name1 << endl;

	else

	{

		cout << "I'm confused\n";

		int length1, length2;

		length1 = strlen(name1);                   // get length of C-string
		length2 = strlen(name2);

		if (length1 != length2)

			cout << "Names are of different length\n";

		else

			for (int i = 0; i < length1; i++)

				if (name1[i] != name2[i])       // access individual characters

					cout << "character " << i + 1 << "is different\n";



		cout << "Make both names the same (Y/N): ";

		char response;

		cin >> response;

		if ((response == 'Y') || (response == 'y'));

		strcpy_s(name2, name1);                 // copy C-strings



		cout << "First name is " << name1 << endl;

		cout << "Second name is " << name2 << endl;

	}



	strcpy_s(name1, name2);                           // concatenate two C-strings

	cout << "Your name is now " << name1 << endl;



	return 0;

}

