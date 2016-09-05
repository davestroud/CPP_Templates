//This program will read the radii of circles.  This is an array of records where each record
// will have the radius of the circle read from the keyboard and the diameter and area of the
// circle will be calculated by the program.  This information is stored in a binary file.
//  Then make an output file (with headings) of that information. 
// Left justify the information for each field.  Each record will consist of the following fields:
//radius           float
//area             flaot
//circumference    float

#include <fstream>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


const int MAXREC = 20;      //maximum number of records
const float PI = 3.14159;     //Value of PI

struct circleinfo  //defining a structure (record) to hold circle information
{
	float radius;    //the radius of the circle
	float area;      //the area of the circle
	float circum;    //the circumference of the circle

};

typedef circleinfo recordtype[MAXREC];

int main()

{
	  fstream indata;
	  ofstream outcircle;  //output file of circle information
	  indata.open("circle.dat", ios::out | ios::binary);  //open file as output
	  outcircle.open("circle.out");   //output file that has circle information
	  outcircle << left << fixed << setprecision(2); //left indicates left justified for fields
	 
	  recordtype circle;   //declaration of array of circles
	  char more = 'Y';  //check if more data should be read
	  int totalrecs = 0;   //actual number of records
      int rad;  //holding area for radius
	  while (more == 'Y'|| more == 'y')
	  {

		cout << "Enter the following information" << endl;
		cout << "Radius of circle: ";
		cin >> rad;
		circle[totalrecs].radius = rad;
		//calculate diameter and radius
		circle[totalrecs].area = PI * (pow(rad,2));
		circle[totalrecs].circum = 2 * PI * rad;
	
		//write this record to the file
		indata.write((char *)& circle[totalrecs], sizeof(circle[totalrecs]));
		totalrecs++;
		cout << "Enter a Y if you would like to input more data" << endl;
		cin >> more;
		cin.ignore();
	  }
		cout << "That's all the information" << endl;

	    indata.close();

		indata.open("circle.dat", ios::in);
        //write heading to output file
		outcircle << setw(10) << "Radius" << setw(10) << "AREA" << setw(10) << "Circumference" << endl << endl;
		for (int count = 0; count < totalrecs;  count++)
	{	
		indata.read((char *)&circle[count], sizeof(circle[count]));  //reads record from a file
			
		//output individual information
		outcircle << setw(10) << circle[count].radius;
		outcircle << setw(10) << circle[count].area;
		outcircle << setw(10) << circle[count].circum << endl;
		
    
	}	
		return 0;
}