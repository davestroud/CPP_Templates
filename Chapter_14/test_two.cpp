/*
917
1. Numbers Class
Design a class Numbers that can be used to translate whole dollar amounts
in the range 0 through 9999 into an English description of the number.
For example, the number 713 would be translated into the string seven hundred thirteen,
and 8203 would be translated into eight thousand two hundred three.
*/

#include <iostream>
#include <string>
using namespace std;

class Numbers
{
private:
	int number;

	static const string lessThan20[20];
	static const string greaterThan19[8];
	static const string hundred;
	static const string thousand;

public:
	//cosntructor
	Numbers();
	Numbers(int num)
	{
		setNumber(num);
	}

	void setNumber(int num)
		{number = num;}

	void print();

};

// Static member variables must be defined outside of the class
const string Numbers::lessThan20[20] =	{"zero", "one" , "two", "three", "four", "five",
										"six", "seven", "eight", "nine", "ten", "eleven",
										"twelve", "thirteen", "fourteen", "fifteen",
										"sixteen", "seventeen", "eighteen", "nineteen"};

const string Numbers::greaterThan19[8] =	{"twenty", "thirty", "forty", "fifty", "sixty",
											"seventy", "eighty", "ninety"};

const string Numbers::hundred = "hundred";
const string Numbers::thousand = "thousand";

//print function
void Numbers::print()
{
	int firstNum;
	int secondNum;


	if (number >= 0 && number < 20)  //executes pefectly
	{
		cout << lessThan20[number]<< " dollars";
	}
	else if (number >= 20 && number < 100) //2 digit numbers, > 20
	{
		if (number / 10 == 2)
		{
			secondNum = number - (2 * 10);
			cout <<  greaterThan19[0] << " " << lessThan20[secondNum] << " dollars";
		}
		else if (number / 10 == 3)
		{
			secondNum = number - (3 * 10);
			cout <<  greaterThan19[1] << " " << lessThan20[secondNum] << " dollars";
		}
		else if (number / 10 == 4)
		{
			secondNum = number - (4 * 10);
			cout <<  greaterThan19[2] << " " << lessThan20[secondNum] << " dollars";
		}
		else if (number / 10 == 5)
		{
			secondNum = number - (5 * 10);
			cout <<  greaterThan19[3] << " " << lessThan20[secondNum] << " dollars";
		}
		else if (number / 10 == 6)
		{
			secondNum = number - (6 * 10);
			cout <<  greaterThan19[4] << " " << lessThan20[secondNum] << " dollars";
		}
		else if (number / 10 == 7)
		{
			secondNum = number - (7 * 10);
			cout <<  greaterThan19[5] << " " << lessThan20[secondNum] << " dollars";
		}
		else if (number / 10 == 8)
		{
			secondNum = number - (8 * 10);
			cout <<  greaterThan19[6] << " " << lessThan20[secondNum] << " dollars";
		}
		else
		{
			secondNum = number - (9 * 10);
			cout <<  greaterThan19[7] << " " << lessThan20[secondNum] << " dollars";
		}

		//check 1st digit of 2 digit number, and assign it int firstNum
		//check 2nd digit & assign it to, int secondNum

		//cout <<  greaterThan19[firstNum] << lessThan20[secondNum]<< " dollar";
	}
	else if (number >= 100 && number < 1000) //3 digit numbers, < 1000
	{
		//if statement checks if last 2 digits are less than 20
			//check 1st digit of 3 digit number, and assign it int firstNum
			//check 2nd & 3rd digit, assign it to, int secondNum
			//cout << greaterThan19[firstNum] << " " << lessThan20[secondNum]<< " dollar";

		//else works with last 2 digits greater than 19
			//check 1st digit of 3 digit number, and assign it int firstNum
			//check 2nd digit, assign it to, int secondNum
			//check 3rd digit & assign it to, int thirdNum
			//cout << greaterThan19[firstNum] << " " << lessThan20[secondNum] << " " <<  lessThan20thirdNum] << dollar";
	}
	else //(number >= 1000 && number < 10000)  //4 digit numbers, > 20
	{
		//cout << lessThan20[number]<< " dollar";
	}
}


int main()
{
	int input;
	//Numbers numObject;

	cout << "Enter a dollar amount from 0 to 9999: ";
	cin >> input;

	while (input >= 0 && input <= 9999)
	{
		Numbers numObject(input);	//pass user input to constructor
		numObject.print();

		cout << endl << endl;

		cout << "Enter another amount, or a value less than" << endl;
		cout << "0 or greater than 9999 to quit: ";
		cin >> input;
	}

	cout << "You're finished";
	cout << endl;

	system("pause");
	return 0;
}
