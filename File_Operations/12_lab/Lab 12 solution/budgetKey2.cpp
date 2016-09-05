//This program reads in an array of records of financial information each containing: 
//a person's name, income, rent, food, utilities and miscellaneous expenses
//from the keyboard and then determines the net money (income minus the other fields)
//and sends that information to another record(student) which is written to an output file


#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const NAMEAMOUNT = 15;
const MAXREC = 20;
struct  budget  //defining a structure (record) to hold name and financial information
{
	char name[NAMEAMOUNT + 1];
	float income;    //person's monthly income
	float rent;      //person's monthly rent
	float food;      //person's monthly food bill
	float utilities; //person's monthly utility bill
	float miscell;   //person's other bills
	float net;       //person's net money after bills are paid
	
};

typedef budget recordtype[MAXREC];

int main()

{
	  fstream indata;
	  ofstream outdata;  //output file of student
	  indata.open("income.dat", ios::out | ios::binary);  //open file as output
	  outdata.open("student.out");   //output file that has student information
	  outdata << left << fixed << setprecision(2); //left indicates left justified for fields
	 
	  recordtype person;   //declaration of person  as array of records
	  char more = 'Y';  //check if more data should be read
	  int totalrecs = 0;   //actual number of records

	  while (more == 'Y'|| more == 'y')
	  {

		cout << "Enter the following information" << endl;
		cout << "Person's name: ";
		cin.getline(person[totalrecs].name,NAMEAMOUNT);
		cout << "Income :";
		cin >> person[totalrecs].income;
	
		cout << "Rent: ";
		cin >> person[totalrecs].rent;
		
		cout << "Food: ";
		cin >> person[totalrecs].food;
	
		cout << "Utilities: ";
		cin >> person[totalrecs].utilities;
       
		cout << "Miscellaneous: ";
		cin >> person[totalrecs].miscell;
		
		//find the net
        person[totalrecs].net = person[totalrecs].income - person[totalrecs].rent - 
			                    person[totalrecs].food - 
			                    person[totalrecs].utilities - person[totalrecs].miscell;
		//write this record to the file
		indata.write((char *)&person[totalrecs], sizeof(person[totalrecs]));
		totalrecs++;
		cout << "Enter a Y if you would like to input more data" << endl;
		cin >> more;
		cin.ignore();
	  }
		cout<< "That's all the information" << endl;

	    indata.close();

		indata.open("income.dat", ios::in);
        //write heading to output file
		outdata << setw(20) << "Name" << setw(10) << "Income" << setw(10) << "Rent" << setw(10)
			    << "Food" << setw(15) << "Utilities" << setw(15) << "Miscellaneous"
			    << setw(10) << "Net Money" << endl << endl;
		for (int count=0;  count < totalrecs; count++)
		{	
		  indata.read((char *)&person[count], sizeof(person[count]));  //reads record from a file
			
		//output individual information
		outdata << setw(20) << person[count].name;
		outdata << setw(10) << person[count].income;
		outdata << setw(10) << person[count].rent;
		outdata << setw(10) << person[count].food;
		outdata << setw(15) << person[count].utilities;
		outdata << setw(15) << person[count].miscell;
		outdata << setw(10) << person[count].net<<endl;
    
	}	
		return 0;
}