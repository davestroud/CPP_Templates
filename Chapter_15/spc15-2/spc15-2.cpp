// Chapter 15, Programming Challenge 2: ShiftSupervisor class
#include <iostream>
#include <iomanip>
#include "ShiftSupervisor.h"
using namespace std;

// Function prototype
void displayInfo(ShiftSupervisor);

int main()
{
	ShiftSupervisor supervisor("Kim Jones", "321", "12/15/2012", 
		75000.0, 15000.0);
	displayInfo(supervisor);
	return 0;
}

//******************************************************
// The displayInfo function displays a shift           *
// supervisor's employment information.                *
//******************************************************
void displayInfo(ShiftSupervisor e)
{
	cout << setprecision(2) << fixed << showpoint;
	cout << "Name: " 
		 << e.getName() << endl;
	cout << "Employee number: " 
		 << e.getNumber() << endl;
	cout << "Hire date: " 
		 << e.getHireDate() << endl;
	cout << "Annual Salary: $" 
		 << e.getSalary() << endl;
	cout << "Annual Production Bonus: $" 
		 << e.getBonus() << endl;
}