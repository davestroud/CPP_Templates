#include <iostream>
#include <cctype>

using namespace std;
const int MAXNUM = 51;

int main()
{
	char inputString[MAXNUM];
	int length;
	int numLetters = 0;
	int numVowels = 0;
	int numConsonants;

	cout << "Please input a string of no more than 50 characters " << endl << endl;
	cin.getline(inputString, 50);
	cout << endl;
	cout << "The input string is: " << endl << inputString << endl << endl;
	length = strlen(inputString);

	for (int count = 0; count <= length; count++)
	{
		if (isalpha(inputString[count]))
			numLetters++;

		if (tolower(inputString[count])=='a'||tolower(inputString[count])=='e'||tolower(inputString[count])=='i'||
			tolower(inputString[count])=='o'||tolower(inputString[count])=='u')
			numVowels++;
	}

	numConsonants = numLetters - numVowels;
	cout << "The number of consonants is " << numConsonants << endl << endl;

	return 0;
}