// Punch Line
// reads and prints a joke and its punch line from two diferent files.
// one being the joke file and the other having the punch line as the last line
// of that file
// September 19, 2012
// Programmer: William York

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<stdlib.h>

using namespace std;

// Function prototypes
void functionJoke(fstream &);
void functionPunchLine(fstream &);

int main()
{
	fstream jokeFile, punchLineFile;

	jokeFile.open("joke.txt", ios::in );

	if (jokeFile.fail())
	{ cout << " Error openeing file!! \n\n"; }

	functionJoke(jokeFile);
	jokeFile.close();

	system("PAUSE");

	cout << "\n\n\n";

	punchLineFile.open("punchline.txt", ios::in);

	if (punchLineFile.fail())
	{ cout << " Error Opening file!! \n\n"; }

	functionPunchLine(punchLineFile);

	punchLineFile.close();

	return 0;
}

void functionJoke(fstream &file)
{
	char ch;

	file.get(ch);
	while (!file.fail())
	{ cout << ch; file.get(ch); }
	cout << "\n\n";

}

void functionPunchLine(fstream &file)
{
	const int LENGTH = 81;
	char input[LENGTH];

	file.getline(input, LENGTH, '\n');
	while(!file.eof())
	{
		file.getline(input, LENGTH, '\n');
	}

	cout << input << "\n\n\n";
}
