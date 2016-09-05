

// This program uses hours, pay rate, state tax and fed tax to determine gross
// and net pay.

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Fill in the code to define payfile as an input file
	float gross;
	float net;
	float hours;
	float payRate;
    float stateTax;
	float fedTax;

	cout << fixed << setprecision(2) << showpoint;
	// FILL IN THE CODE TO OPEN payfile AND ATTACH IT TO THE PHYSICAL FILE
    // NAMED payroll.dat

	// FILL IN CODE TO WRITE A CONDITIONAL STATEMENT TO CHECK IF payfile 
	// DOES NOT EXIST.
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;
		return 1;
	}

	cout << "Payrate      Hours    Gross Pay       Net Pay" 
           << endl   << endl;      
     // FILL IN CODE TO PRIME THE READ FOR THE payfile FILE.
     // FILL IN CODE TO WRITE A LOOP CONDITION TO RUN WHILE payfile HAS MORE 
     // DATA TO PROCESS.
	{
	   payfile >> payRate >> stateTax >> fedTax;
	   gross = payRate * hours;
	   net = gross - (gross * stateTax) - (gross * fedTax);
	   cout << payRate << setw(15) << hours << setw(12) << gross
              << setw(12)  << net << endl;
	   payfile >> // FILL IN THE CODE TO FINISH THIS WITH THE APPROPRIATE  
		          // VARIABLE TO BE INPUT
	}
      payfile.close();
      return 0;
}