

// This program uses hours, pay rate, state tax and fed tax to determine gross
// and net pay.

#include<fstream>
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	ifstream payFile;
	ofstream outPay;
	float gross;
	float net;
	float hours;
	float payRate;
    float stateTax;
	float fedTax;
    outPay.open("pay.out");
	outPay << fixed << setprecision(2) << showpoint;
	payFile.open("payroll.dat");

	if (!payFile)
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;
		return 1;
	}

	outPay << "Payrate      Hours    Gross Pay       Net Pay" 
           << endl   << endl;      
    payFile >> hours;
	while (payFile)
	{
	   payFile >> payRate >> stateTax >> fedTax;
	   gross = payRate * hours;
	   net = gross - (gross * stateTax) - (gross * fedTax);
	   outPay << payRate << setw(15) << hours << setw(12) << gross
              << setw(12)  << net << endl;
	   payFile >> hours;
	}
      payFile.close();
	  outPay.close();
      return 0;
}