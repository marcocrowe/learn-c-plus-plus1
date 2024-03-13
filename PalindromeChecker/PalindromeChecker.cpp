// This program checks if a word is a palindrome or not.
// A palindrome is a word that is the same forwards and backwards.
using namespace std;
#include <iostream>

bool CheckforPalindrome(string word);

bool CheckforPalindrome(string word)
{
	int length = word.length();
	int i, j;

	for (i = 0, j = length - 1; i < length / 2; i++, j--)
	{
		if (word[i] != word[j])
		{
			return false;
		}
	}
	return true;
}

char tolower(char c);

char tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return c + 32;
	}
	else
	{
		return c;
	}
}

int main()
{
	string text;
	bool confermedPalindrome;
	char swap;

	cout << "Enter a word: ";
	cin >> text;


	for (int i = 0; i < text.length(); i++)
	{
		swap = tolower(text[i]);
		text[i] = swap;
	}

	confermedPalindrome = CheckforPalindrome(text);

	if (confermedPalindrome)
	{
		cout << "The word is a palindrome" << endl;
	}
	else
	{
		cout << "The word is not a palindrome" << endl;
	}
	return 0;
}