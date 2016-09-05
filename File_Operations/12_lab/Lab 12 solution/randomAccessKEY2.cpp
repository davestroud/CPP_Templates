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
		
		cout << "The read position is currently at byte "
			 <<  inFile.tellg() << endl;

		cout << "Enter an offset from the end of the file position: ";
		cin >> offset;
		inFile.seekg(offset, ios::end);
		inFile.get(ch);
		cout << "The character read is "  << ch << endl;
		cout << "If you would like to input another offset enter a Y"
			 << endl;
		cin >> more;
		inFile.clear();

	} while (toupper(more) == 'Y');

	inFile.close();
	return 0;
}
