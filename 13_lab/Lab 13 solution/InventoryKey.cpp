

#include <iostream>
#include <fstream>
using namespace std;


// This program defines a class called Inventory that has itemnumber (which 
// contains the id number of a product) and numofitem (which contains the 
// quantity on hand of the corresponding product)as private data members.
// The program will read these values from a file and store them in an 
// array of objects (of type Inventory).  It will then print these values
// to the screen.

// Example: Given the following data file:
//     986 8
//     432 24
// This program reads these values into an array of objects and prints
//     Item number 986 has 8 items in stock
//     Item number 432 has 24 items in stock
// to the screen

const NUMOFPROD = 10;   // This holds the number of products a store sells

class Inventory
{
public:

   void getId(int item);      // This puts item in the private data member 
		                  // itemnumber of the object that calls it.
   void getAmount(int num);   // This puts num in the private data member
                              // numofitem of the object that calls it.
   void display();            // This prints to the screen 
                              // the value of itemnumber and numofitem of the 
                              // object that calls it.

		

private:

   int  itemNumber;  		// This is an id number of the product
   int  numOfItem;   		// This is the number of items in stock 

};


int main()
{

   ifstream infile;	      // Input file to read values into array
   infile.open("Inventory.dat");

   Inventory products[NUMOFPROD];

   int pos;                   // loop counter
   int id;                    // variable holding the id number
   int total;                 // variable holding the total for each id number

  for (pos = 0; pos < NUMOFPROD; pos++)
	  
  {
	  infile >> id >> total;
	  products[pos].getId(id);
	  products[pos].getAmount(total);
  }

  for (pos = 0; pos < NUMOFPROD; pos++)

	  products[pos].display();


   return 0;

}


// Member function implementations

void Inventory::getId(int item)
//  This member function puts the value of id into the private data member itemNumber

{
	itemNumber = item;
}

void Inventory::getAmount(int num)
// This member function puts the value of num into the private data member numOfItem
{
	numOfItem = num;
}

void Inventory::display()
// This member function displays the value of the object to the screen
{
	cout <<"Item number " << itemNumber << " has " << numOfItem << " items in stock " << endl;
}


