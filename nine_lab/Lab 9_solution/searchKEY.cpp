// This program will read id numbers into a dynamically allocated array
// It will then read in another id and call a function to determine if that id is in
// the array.  

// Dean DeFino

#include<iostream>
using namespace std;

void search(int * id, int sizeOfId, int searchId);


int main()

{
	int * id;				 // pointer to integer dynamic array
	int sizeOfId;			 // user defined size of the array
    int searchId;			 // id number to be searched 

	cout << "Please input the number of id numbers to be read" << endl;
	cin >> sizeOfId;

	id= new int[sizeOfId];  //allocate array

	if (id == NULL)   //always test for null
 
	{
	   cout << "Error allocating memory!\n";
	   return 1;
	}

	for (int count = 0;  count < sizeOfId; count++)
	{

	    cout << "Please enter an id number" << endl;
	    cin >> id[count];
		
	 }

   cout << endl << endl << "Please input an id number to be searched" << endl;
   cin >> searchId;

   search(id, sizeOfId, searchId);

   return 0;
}



//*******************************************************************************
//					Search
//
// task:	  This function determines if the item to be searched is in the array
// data in :  array, the size of array and value to be searced in the array
// data out:  none
//
//********************************************************************************

void search(int * id, int sizeOfId, int searchId)

{

  int pos = 0;
  while (searchId != id[pos] && pos < sizeOfId)
	  pos++;

  if (pos == sizeOfId)
	   cout << searchId << " is not in the array" << endl;
  else
	   cout << searchId<< " is in the array" << endl;

}