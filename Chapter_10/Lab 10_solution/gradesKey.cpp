#include <fstream>
#include <iostream>
using namespace std;

// PLACE YOUR NAME HERE

const MAXNAME = 20;

int main()
{
	ifstream inData;
	inData.open("grades.txt");

	char name[MAXNAME + 1];  // holds student name
	float average;  // holds student average


	inData.get(name,MAXNAME+1);
	while (inData)
	{
		inData >> average;
		cout << name << " has an " << average
			 << " average" << endl ;

		inData.ignore(80,'\n');
		inData.get(name,MAXNAME+1);

	}

	return 0;
}