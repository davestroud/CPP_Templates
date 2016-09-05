
#include <fstream>
#include<iostream>
#include<iomanip>
using namespace std;


// This program reads records from a file.  The file contains the
// following: a student's name, two test grades and a final exam. 
// It then prints this information to the screen.


const NAMESIZE = 15;
const MAXRECORDS = 50;
struct Grades                             // define a structure
{
	char name[NAMESIZE + 1];
	int test1;
	int test2;
	int final;
	char letter;
	
};

typedef Grades gradeType[MAXRECORDS];    
 // This makes gradeType a data type
 // that holds MAXRECORDS
 // Grades structures.



void readIt(ifstream&, gradeType, int&);


int main()

{    
	 ifstream indata;
	 indata.open("graderoll.dat");
	 int numRecord;                // number of records read in
	 float average;
	 gradeType studentRecord; 
     
	if(!indata)
	{
		cout << "Error opening file. \n";
		cout << "It may not exist where indicated" << endl;
		return 1;
	}

	readIt(indata, studentRecord, numRecord);

	 
	// output the information 
    for (int count = 0; count < numRecord; count++)
	{
	   cout << studentRecord[count].name << setw(10) 
		    << studentRecord[count].test1
		    << setw(10) << studentRecord[count].test2;
	   cout << setw(10) << studentRecord[count].final;
	
	
	average = (.3 * studentRecord[count].test1) + (.3 * studentRecord[count].test2)
		       + (.4 * studentRecord[count].final);

	if (average >=90)
		studentRecord[count].letter = 'A';
	else if (average >= 80)
		studentRecord[count].letter = 'B';
	else if (average >=70)
		studentRecord[count].letter = 'C';
	else if (average >=60)
		studentRecord[count].letter = 'D';
	else
		studentRecord[count].letter = 'F';
	cout << setw(10) << studentRecord[count].letter << endl;
	}

	return 0;
}

//**************************************************************		
//                        		readIt
//
//  task:	  This procedure reads in recores into an array of 
//            records from an input file and keeps track of the 
//		      total number of records
//  data in:  data file containing information to be placed in
//            the array
//  data out: an array of records and the number of records
//
//**************************************************************

void readIt(ifstream& inData, gradeType gradeRec, int& total)

{
   total = 0;
  
   inData.get(gradeRec[total].name, NAMESIZE);
   while (inData)
   {
    inData >> gradeRec[total].test1;
	inData >> gradeRec[total].test2;
	inData >> gradeRec[total].final;
	 	 
	total++;     // add one to total

    inData.ignore();
	inData.get(gradeRec[total].name,NAMESIZE);
    
	  
  }

}
