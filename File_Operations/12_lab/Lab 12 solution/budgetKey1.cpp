//This program reads in a record of financial information: 
//a person's name, income, rent, food, utilities and miscellaneous expenses
//from the keyboard and then determines the net money (income minus the other fields)
//and sends that information to another record(student) which is written to an output file


#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const int NAMESIZE = 15;
struct  budget  //defining a structure (record) to hold name and financial information
{
	char name[NAMESIZE + 1;
	float income;    //person's monthly income
	float rent;      //person's monthly rent
	float food;      //person's monthly food bill
	float utilities; //person's monthly utility bill
	float miscell;   //person's other bills
	float net;       //person's net money after bills are paid
	
};

int main()

{
	  fstream indata;
	  ofstream outdata; 
	  indata.open("income.dat", ios::out | ios::binary);  //open file as output
	  outdata.open("student.out");   //output file that has student information
	  outdata << left << fixed << setprecision(2); //left indicates left justified for fields
	 
	  budget person;   //declaration of person and student as a record


		cout << "Enter the following information" << endl;
		cout << "Person's name: ";
		cin.getline(person.name, NAMESIZE);
		cout << "Income :";
		cin >> person.income;
		
		cout << "Rent: ";
		cin >> person.rent;
	
		cout << "Food: ";
		cin >> person.food;
	
		cout << "Utilities: ";
		cin >> person.utilities;
       
		cout << "Miscellaneous: ";
		cin >> person.miscell;
		
		//find the net
        person.net = person.income - person.rent - person.food - 
			       person.utilities - person.miscell;
		//write this record to the file
		indata.write((char *)&person, sizeof(person));


	    indata.close();

		indata.open("income.dat", ios::in);
		//reopen the file but now as an input file
		indata.read((char *)&person, sizeof(person));  //reads record from a file
		//writes information to output file
		outdata << setw(20) << "Name"<<setw(10) << "Income" << setw(10) << "Rent" << setw(10)
			    << "Food" << setw(15) << "Utilities" << setw(15) << "Miscellaneous"
			    << setw(10) << "Net Money" << endl << endl;
		//output individual information
		outdata << setw(20) << person.name;
		outdata << setw(10) << person.income;
		outdata << setw(10) << person.rent;
		outdata << setw(10) << person.food;
		outdata << setw(15) << person.utilities;
		outdata << setw(15) << person.miscell;
		outdata << setw(10) << person.net<<endl;
    return 0;
}