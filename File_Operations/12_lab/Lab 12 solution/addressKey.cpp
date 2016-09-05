//This program reads in an array of records of people's names an addresses each containing: 
//a person's first name, last name street address, city, state, zip
//from the keyboard and then and writes that information to an output file


#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;

const FIRSTNAME = 15;  // maximum characters in first name
const LASTNAME = 15;   // maximum characters in last name
const STREETMAX = 30;  // maximum characters in the street address
const CITYMAX = 20;    // maximum characters in the city
const STATEMAX = 10;   // maximum chracters in state
const MAXREC = 20;     // maximum number of records

struct  addressbook  // defining a structure (record) to hold address
{
	char firstname[FIRSTNAME];  // person's first name
	char lastname[LASTNAME];    // person's last name
	char street[STREETMAX];     // street address
	char city[CITYMAX];         // city address
	char state[STATEMAX];       // state address
	long zip;                   // zip code
	
};

typedef addressbook recordtype[MAXREC];

int main()

{
	  fstream indata;
	  ofstream outaddress;  // output file of address
	  indata.open("address.dat", ios::out | ios::binary);  // open file as output
	  outaddress.open("address.out");   // output file that has address information
	  outaddress << left << fixed << setprecision(2); // dresses
	  recordtype address;
	  char more = 'Y';  // check if more data should be read
	  int totalrecs = 0;   // actual number of records

	  while (more == 'Y'|| more == 'y')
	  {

		cout << "Enter the following information" << endl;
		cout << "Person's first name: ";
		cin.getline(address[totalrecs].firstname,FIRSTNAME);
		cout << "Person's last name: ";
		cin.getline(address[totalrecs].lastname,LASTNAME);
		cout << "Street address :";
		cin.getline(address[totalrecs].street,STREETMAX);
		cout << "City: ";
		cin.getline(address[totalrecs].city,CITYMAX);
		cout << "State: ";
		cin.getline(address[totalrecs].state,STATEMAX);
		cout << "Zip Code: ";
		cin >> address[totalrecs].zip;
		
	
		// write this record to the file
		indata.write((char *)&address[totalrecs], sizeof(address[totalrecs]));
		totalrecs++;
		cout << "Enter a Y if you would like to input more data" << endl;
		cin >> more;
		cin.ignore();
	  }
		cout << "That's all the information" << endl;

	    indata.close();

		indata.open("address.dat", ios::in);
        // write heading to output file
		outaddress << setw(15) << "First Name" << setw(15) << "Last Name" << setw(30) << "Street" << setw(20)
			       << "City" << setw(7) << "State" << setw(15) << "Zip Code" << endl << endl;
		for (int count = 0;  count < totalrecs;	 count++)
	{	
		indata.read((char *)&address[count], sizeof(address[count]));  //reads record from a file
			
		// output individual information
		outaddress << setw(15) << address[count].firstname;
		outaddress << setw(15) << address[count].lastname;
		outaddress << setw(30) << address[count].street;
		outaddress << setw(20) << address[count].city;
		outaddress << setw(7) << address[count].state;
		outaddress << setw(15) << address[count].zip << endl;
		
    
	}	
		return 0;
}