//This program reads in an array of records of employee information each containing: 
//a person's name, social security number, department id, years employed, net salary.
//from a file and stores this information into a binary file.  The average net income and years
//employed are calculated and (with the information in the binary file) is sent to an output file

#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const NAMEAMOUNT = 15;
const MAXREC = 20;
struct  employeedata  //defining a structure (record) to hold name and financial information
{
	char name[NAMEAMOUNT];
	long  ss;          //person's social security
	int   deptid;      //person's department id
	int   years;       //amount of years person has been employeed.
	float salary;      //person's annual salary
	
		
};

typedef employeedata recordtype[MAXREC];

int main()

{
	  ifstream infile;//file containing the employee information
	  fstream binfile;//binary file created by the program
	  ofstream outemp;  //output file of employees
	  binfile.open("employee.dat", ios::out | ios::binary);  //open file as output
	  outemp.open("employee.out");   //output file that has employee information
	  outemp << left << fixed << setprecision(2); //left indicates left justified for fields
	  infile.open("employee.in");  //input file to get the records.
	  recordtype employee;   //declaration of array of records of employees
	  float totalsalaries = 0;   //contains all salaries added together
	  int totalyears = 0;        //contains all years added together
	  int totalrecs = 0;   //actual number of records
      infile.get(employee[totalrecs].name,NAMEAMOUNT);
	  while (infile)
	  {

		infile >> employee[totalrecs].ss;
		infile >> employee[totalrecs].deptid;
        infile >> employee[totalrecs].years;
		infile >> employee[totalrecs].salary;
		
		//add to total years and total salay
        
		totalsalaries = totalsalaries+employee[totalrecs].salary;
		totalyears = totalyears+employee[totalrecs].years;

		//write this record to the file
		binfile.write((char *)& employee[totalrecs], sizeof(employee[totalrecs]));
		totalrecs++;
		infile.ignore();
		infile.get(employee[totalrecs].name,NAMEAMOUNT);
	
	  }
	
	    binfile.close();

		binfile.open("employee.dat", ios::in);
        //write heading to output file
		outemp << setw(20) << "Name" << setw(20) << "Social Security" << setw(15) << "Department ID" << setw(20)
			   << "Years Employeed" << setw(15) << "Salary" << endl << endl;
		for (int count = 0;
		         count < totalrecs;
				 count++)
	{	
		binfile.read((char *)& employee[count], sizeof(employee[count]));  //reads record from a file
			
		//output individual information
		outemp << setw(20) << employee[count].name;
		outemp << setw(20) << employee[count].ss;
		outemp << setw(15) << employee[count].deptid;
		outemp << setw(20) << employee[count].years;
		outemp << setw(15) << employee[count].salary<<endl;

    
	}	


//	find average years employeed and salary
		outemp << endl << endl << "The average number of years employeed is "
	           << totalyears / totalrecs << endl << endl;

        outemp << "The average salary is " << totalsalaries / totalrecs << endl;

		return 0;
}