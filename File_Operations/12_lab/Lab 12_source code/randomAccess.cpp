#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	fstream inFile("proverb.txt", ios::in);
	long offset;
	char ch;
	char more;

	do
	{
		//  Fill in the code to write to the screen
		//  the current read position (with label)

		cout << "Enter an offset from the current read position: ";
		cin >> offset;

		//  Fill in the code to move the read position "offset" bytes
		//  from the current read position.

		//  Fill in the code to get one byte of information from the file
		//  and place it in the variable "ch".

		cout << "The character read is "  << ch << endl;
		cout << "If you would like to input another offset enter a Y"
			 << endl;

		cin >> more;

		//  Fill in the code to clear the eof flag.

	} while (toupper(more) == 'Y');

	inFile.close();
	return 0;
}
