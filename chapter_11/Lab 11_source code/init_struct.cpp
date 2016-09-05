#include <iostream>
#include <string>
using namespace std;


// This program demonstrates partially initialized strucure variables

// PLACE YOUR NAME HERE

struct taxPayer
{
	string name;
	long int socialSecNum;
	float taxRate;
	float income;
	float taxes;
};

int main()
{
	// Fill in code to initialize a structure variable named citizen1 so that
	// the first three members are initilized.  Assume the name is Tim
	// McGuiness,the social security number is 255871234, and the tax rate is .35
	taxPayer citizen1 = {"Tim McGuiness", 255871234, .35};
	taxPayer citizen2 = {"John Kane", 278990582, .29};

	// Fill in code to initialize a structure variable named citizen2 so that
	// the first three members are initialized.  Assume the name is John Kane,
	// the social security number is 278990582, and the tax rate is .29

	cout << fixed << showpoint << setprecision(2);

	// calculate taxes due for citizen1
	cout << "Name: " << citizen1.name << endl;
	cout << "Enter your income for this year: ";
	cin >> citizen1.income;

	// Fill in code to prompt the user to enter this year's income for the citizen1
	// Fill in code to read in this income to the appropriate structure member

	// Fill in code to determine this year's taxes for citizen1


	cout << "Name: " << citizen1.name << endl;
	cout << "Social Security Number: " << citizen1.socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

	// calculate taxes due for citizen2

	// FILL IN CODE to prompt the user to enter this year's income for citizen2
	// FILL IN CODE to read in this income to the appropriate structure member

	// FILL IN CODE to determine this year's taxes for citizen2



	cout << "Name: " << citizen2.name << endl;
	cout << "Social Security Number: " << citizen2.socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;

	return 0;
}
